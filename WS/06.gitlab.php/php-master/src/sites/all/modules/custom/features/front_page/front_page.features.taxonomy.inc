<?php
/**
 * @file
 * front_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function front_page_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'category',
      'machine_name' => 'category',
      'description' => 'Different categories for content type article',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
