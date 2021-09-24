<?php 

function jointDisability_form_alter(&$form, &$form_state, $form_id){

    if ($form['#id'] == 'views-exposed-form-knowledge-and-training-page' && isset($form['combine'])) 
        $form['combine']['#attributes'] = array('placeholder' => t('What would you like to know?'));
    if ($form['#id'] == 'views-exposed-form-tevet-search-page' )
        $form['search_api_combined_1']['#attributes'] = array('placeholder' => t('What would you like to know?'));
   
}
 

?>
