<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 * 
 * --- custom variables:
 * - $fields_counter - count result for each field with multiple values (processed from joint_preprocess_node)
 * - $story_nodes - node objects that contain success stories from program that associated with the current area.
 * - $story_nodes_slider - node objects that contain success stories from program that associated with the current area.
 */
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<?php //print fatfish_fish_print_flexslider($story_nodes_slider); 	?>
    
    <?php	
         //$block = module_invoke('block', 'block_view', '40');dpm($block);
		/*$block_id = 40;
		$block = block_block_view($block_id);
		$block['content'] = i18n_string(array('blocks', 'block', $block_id, 'body'), $block['content']);
        print render($block['content']);*/
    ?>
    <?php print $user_picture; ?>

    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <div class="submitted">
        <?php print $submitted; ?>
      </div>
    <?php endif;?>

    <div class="content"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        //print render($content); 
      ?>
  <div hidden id = "field_locations_area"><?php print $content['field_location_count'][0]['#markup'];?></div>
  <?php

    $view_name = 'area';
    
    $view_display_names = array( 'area_magazine'/*, 'area_researches'*/);
    for ($index = 0; $index < sizeof($view_display_names); $index++){

        $my_view = views_get_view($view_name);
        
        if (is_object($my_view) ) { 
      
            $my_view->set_display($view_display_names[$index]);
            $my_view->pre_execute();
            $view_title[$view_display_names[$index]] = $my_view->get_title();
            $view_content[$view_display_names[$index]] = $my_view->render($view_display_names[$index]);  
        }
    }

    ?>
      
<div class="container" id="area_tab_views">
    <!--<ul class="nav vertical-tabs-list col-md-3">
        <?php if ($content['body'][0]['#markup'] != ''): ?>
            <li class="active"><a data-toggle="tab" href="#field_body"><?php echo $content['body']['#title']; ?></a></li>
        <?php endif;?>  
        <?php if ($view_content['area_researches'] != ''): ?>
            <li class="area-researches-tab"><a data-toggle="tab" href="#area_researches"><?php echo $view_title['area_researches']; ?></a></li>
        <?php endif;?> 
        <?php if ($story_nodes != ''): ?>
            <li><a data-toggle="tab" href="#area_stories"><?php echo t('Success Stories'); ?></a></li>
        <?php endif;?>
    </ul>-->

    <div class="tab-content">
        <div id="field_body" class="tab-pane fade in active">
            <h1><?php echo $content['body']['#title']; ?></h1>
            <?php echo $body[0]['value'];?>
            <p><?php echo $view_content['area_magazine']; ?></p>
        </div>
        <div id="area_researches" class="tab-pane fade">
            <h1><?php echo $view_title['area_researches']; ?></h1>
            <p><?php echo $view_content['area_researches']; ?></p>
        </div>
        <div id="area_stories" class="tab-pane fade">
            <h1><?php echo t('Area Stories'); ?></h1>
            <?php foreach ($story_nodes as $key => $s_node) {  ?>
                <div class="success_stories">
                    <div class="success-stories-content">
                        <div class="item-list">    
                            <ul>          
                                <li class="style-left-image">  
                                    <div>        
                                        <div class="col-md-4 col-xs-12 item-image ">
                                            <?php print theme('image_style', array('path' => $s_node->field_image2['und'][0]['uri'], 'style_name' => 'stories'));?>
                                        </div>  
                                    </div>  
                                    <div class="wrapper_text col-md-8 col-xs-12 fieldset">
                                        <div>
                                            <div class="item-title">
                                                <a href="/node/<?php echo $key;?>"><?php echo $s_node->title; ?> </a>
                                            </div>
                                        </div>  	
                                        <div>
                                            <a href="/node/<?php print $s_node->nid;?>">
                                            <div class="item-body"> 
                                               
                                                <?php   $body = $s_node->field_body2['und'][0]['safe_value'];
                                                        $pos = strpos($body, ' ', 800);
                                                        $new_body = substr($body, 0, $pos);
                                                        print  $new_body." ...";?>
                                                
                                            </div>
                                                </a>
                                        </div> 
                                    </div>
                                </li>
                            </ul>
                        </div>    
                    </div>
                </div>
            <?php }?>
        </div>
    </div>
</div>


  <?php
    /*$map_form = drupal_get_form('fatfish_area_map_form');
    if (isset($map_form)) print render($map_form);*/
	?>


  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>

