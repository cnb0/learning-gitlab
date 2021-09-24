<?php

/**
 * @file
 * Block Dictionary Glossary handlers. Insert a block inside of an area.
 */
class views_handler_area_dictionary_glossary extends views_handler_area {
  /**
   * 
   */
  function option_definition() {
    $options = parent::option_definition();

    return $options;
  }

  /**
   * Default options form that provides the label widget that all fields
   * should have.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
   * Render the area
   */
  function render($empty = FALSE) {
    $dictionary_id = isset($this->view->args[0]) && is_numeric($this->view->args[0]) ? $this->view->args[0] : null;
    $selected_latter = isset($this->view->args[1]) && is_string($this->view->args[1]) ? $this->view->args[1] : null;
    
    $query = new EntityFieldQuery();
    $query
        ->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'word')
        ->propertyCondition('status', 1)
        ->propertyOrderBy('created', 'DESC');
    
    if (!empty($dictionary_id) && is_numeric($dictionary_id)) {
      $query->fieldCondition('field_dictionary', 'tid', $dictionary_id);
      $prefix_url = 'dictionary/' . $dictionary_id;
    }
    else {
      $prefix_url = 'dictionary/all';
    }
    
    $result = $query->execute();
    $nodes = entity_load('node', array_keys($result['node']));
    
    $dictionary_latters = array();
    foreach ($nodes as $node_obj) {
      $dictionary_latter =  strtoupper(substr($node_obj->title, 0, 1));
      
      if (!in_array($dictionary_latter, $dictionary_latters)) {
        $dictionary_latters[$dictionary_latter] = $prefix_url  . '/' . $dictionary_latter;
      }
    }
    ksort($dictionary_latters, SORT_LOCALE_STRING);
    
    $dictionary_latters_list = array('items' => array());
    if (!empty($selected_latter) && is_string($selected_latter)) {
      foreach ($dictionary_latters as $dictionary_latter => $latter_url) {
        if ($selected_latter == $dictionary_latter) {
          $dictionary_latters_list['items'][] = array('data' => l($dictionary_latter, $latter_url, array('attributes' => array('class' => array('active')))));
        }
        else {
          $dictionary_latters_list['items'][] = array('data' => l($dictionary_latter, $latter_url));
        }
      }
    }
    else {
      foreach ($dictionary_latters as $dictionary_latter => $latter_url) {
        $dictionary_latters_list['items'][] = array('data' =>  l($dictionary_latter, $latter_url)
        );
      }
    }
    
    return theme('item_list', $dictionary_latters_list);
  }
}