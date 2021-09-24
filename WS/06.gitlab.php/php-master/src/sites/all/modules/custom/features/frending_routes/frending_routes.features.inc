<?php
/**
 * @file
 * frending_routes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function frending_routes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function frending_routes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function frending_routes_image_default_styles() {
  $styles = array();

  // Exported image style: routes.
  $styles['routes'] = array(
    'label' => 'Routes',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function frending_routes_node_info() {
  $items = array(
    'route' => array(
      'name' => t('Route'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
