<?php
/**
 * @file
 * fatfish_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fatfish_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__homepageslider';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'xmlsitemap' => array(
          'weight' => '15',
        ),
        'redirect' => array(
          'weight' => '14',
        ),
        'locations' => array(
          'weight' => '13',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_homepageslider';
  $strongarm->value = '1';
  $export['i18n_node_extended_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_homepageslider';
  $strongarm->value = array();
  $export['i18n_node_options_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_homepageslider';
  $strongarm->value = '2';
  $export['language_content_type_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_homepageslider';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_homepageslider';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_homepageslider';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_homepageslider';
  $strongarm->value = '1';
  $export['node_preview_homepageslider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_homepageslider';
  $strongarm->value = 0;
  $export['node_submitted_homepageslider'] = $strongarm;

  return $export;
}
