<?php
/**
 * @file
 * front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function front_page_image_default_styles() {
  $styles = array();

  // Exported image style: 420x270.
  $styles['420x270'] = array(
    'label' => '420X270',
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_icon.
  $styles['slider_icon'] = array(
    'label' => 'slider_icon',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 187,
          'height' => 187,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function front_page_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('דף הבית'),
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
