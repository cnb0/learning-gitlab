<?php
/**
 * @file
 * Provide views data and handlers for views_block_area.module
 */

/**
 * Implements hook_views_data()
 */
function views_dictionary_glossary_block_views_data() {
  $data['views']['block'] = array(
    'title' => t('Dictionary Glossary block'),
    'help' => t('Insert a Dictionary Glossary block inside an area.'),
    'area' => array(
      'handler' => 'views_handler_area_dictionary_glossary',
    ),
  );
  
  return $data;
}
