<?php
/**
 * @file
 * joint_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function joint_general_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function joint_general_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function joint_general_node_info() {
  $items = array(
    'area' => array(
      'name' => t('תחום'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'program' => array(
      'name' => t('תכנית'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'research' => array(
      'name' => t('מחקר'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
  );
  return $items;
}
