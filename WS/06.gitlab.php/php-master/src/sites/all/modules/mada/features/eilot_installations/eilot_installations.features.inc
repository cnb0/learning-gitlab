<?php
/**
 * @file
 * eilot_installations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eilot_installations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
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
function eilot_installations_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function eilot_installations_node_info() {
  $items = array(
    'installation' => array(
      'name' => t('location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Location name'),
      'help' => '',
    ),
  );
  return $items;
}
