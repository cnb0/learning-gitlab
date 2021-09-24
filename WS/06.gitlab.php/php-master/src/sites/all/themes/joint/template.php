<?php

/**
 * @file
 * template.php
 */

function joint_js_alter(&$js) {

    // Path to theme
    $theme_path = drupal_get_path('theme', 'joint');
    // Overwrites
    $my_js = $theme_path . '/js/script.js';
    $js[$my_js] = drupal_js_defaults($my_js);
    $js[$my_js]['group'] = JS_THEME;
    $js[$my_js]['scope'] = 'footer';
    $js[$my_js]['weight'] = 2;
}


function joint_date_all_day_label() {
   return '';  
}


/**
 * Overrides theme_menu_link().
 */
function joint_menu_link(array $variables) {
		$element = $variables['element'];
		$sub_menu = '';

		if ($element['#below']) {
		// Prevent dropdown functions from being added to management menu so it
		// does not affect the navbar module.
			if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
			  $sub_menu = drupal_render($element['#below']);
			}
			elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] >= 1)) {
			  // Add our own wrapper.
			  unset($element['#below']['#theme_wrappers']);
			  $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
			  // Generate as standard dropdown.
			  $element['#title'] .= ' <span class="caret"></span>';
			  $element['#attributes']['class'][] = 'dropdown';
			  $element['#localized_options']['html'] = TRUE;

			  // Set dropdown trigger element to # to prevent inadvertant page loading
			  // when a submenu link is clicked.
			  $element['#localized_options']['attributes']['data-target'] = '#';
			  $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
			  $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
			}
		}
		// On primary navigation menu, class 'active' is not set on active menu item.
		// @see https://drupal.org/node/1896674
		if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
			$element['#attributes']['class'][] = 'active';
		}
		$output = l($element['#title'], $element['#href'], $element['#localized_options']);
		return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	}

function joint_preprocess_node(&$variables){
    if ($variables['type'] == 'program') {
        $fieldsCnt = array();
        foreach ($variables as $key => $value) {
            if (preg_match('/^field_/', $key)) {
		if(isset($variables[$key]['und']) && !empty($variables[$key]['und'])){
                    $fieldsCnt[$key] = count($variables[$key]['und']);
                }
            } 
        }
        $variables['fields_counter'] = $fieldsCnt;
    }
    
    if ($variables['type'] == 'area') {
        //get success stories
        $nid = check_plain(arg(1));
        $area_node = node_load($nid);
        
        if($area_node) {
            
            $tid = $area_node->field_target_population['und'][0]['tid'];
            
			// get matching programs
			$query = new EntityFieldQuery();
			$query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'program')
			->fieldCondition('field_area', 'tid', $tid);

			$result = $query->execute();
			if ($result && sizeof($result) > 0) {
				$program_nodes = array_keys($result['node']);
			}
			else {
				return;
			}
			
           //$program_nodes = taxonomy_select_nodes($tid);

			// get matching stories
            $query = new EntityFieldQuery();
            $result = $query->entityCondition('entity_type', 'node')
                            ->entityCondition('bundle', 'homepageslider')
                            ->fieldCondition('field_program', 'target_id', $program_nodes, 'IN')               
                            ->propertyCondition('status', NODE_PUBLISHED)
                            ->fieldOrderBy('field_program', 'target_id', 'DESC')
                            ->execute();
            
			if ($result && sizeof($result) > 0) {
				$story_nodes = node_load_multiple(array_keys($result['node']));
			}
            
            
            //take one story per program
            $story_per_program = "";
    
            reset($story_nodes);

            $current_program = null;

            foreach ($story_nodes as $key => $s_node) { 
                if ($s_node->field_program['und'][0]['target_id'] != $current_program) {
                    $current_program = $s_node->field_program['und'][0]['target_id'];  
                    $story_per_program[$key] = $s_node;
                }
            }
            
            $variables['story_nodes'] = $story_per_program;
            
            //take all stories that marked as "show in area slider"
            reset($story_nodes);
            $story_nodes_slider = "";
            
            foreach ($story_nodes as $key => $s_node) {
                if ($s_node->field_front['und'][0]['value'] == 1) {
                    $story_nodes_slider[$key] = $s_node;
                }
            }
            
            $variables['story_nodes_slider'] = $story_nodes_slider;
            

        }
    }
}

function joint_preprocess_page(&$vars){   
    if (arg(0) == 'taxonomy' && arg(0) == 'term' && is_numeric(arg(2))){     
        unset($vars['page']['content']['system_main']['nodes']);     
            unset($vars['page']['content']['system_main']['pager']);     
                unset($vars['page']['content']['system_main']['no_content']);   
                    
    }
} 
    

 function joint_views_pre_render(&$view) {
		global $language ;
		$lang_name = $language->language ;
		
		if ($view->name == "partners") {
			foreach ($view->result as $key=>$value){
				if ($value->_field_data['tid']['entity']->language != $lang_name) {
					unset($view->result[$key]); 
				}
			}
		}
	}
	
	function joint_form_alter(&$form, &$form_state, $form_id){
		if ($form['#id'] == 'views-exposed-form-knowledge-and-training-page' && isset($form['combine'])) 
			$form['combine']['#attributes'] = array('placeholder' => t('What would you like to know?'));
		if ($form['#id'] == 'views-exposed-form-tevet-search-page' )
			$form['search_api_combined_1']['#attributes'] = array('placeholder' => t('Search'));
	}

	function joint_preprocess_field(&$variables) {
		if ($variables['element']['#field_type'] == 'image') {
			$variables['items'][0]['#item']['alt'] = $variables['element']['#object']->field_image['und'][0]['field_alternative_text']['und'][0]['safe_value'];
		}
	}
	
	/*function joint_preprocess_views_view_fields(&$vars) {
		$cnt=0;
		foreach ($vars['fields'] as $id => $field) {
		//	if ($cnt == 0) {//dpm($field);}
			$cnt++;
		}
		//
	}*/
	
	
?>
