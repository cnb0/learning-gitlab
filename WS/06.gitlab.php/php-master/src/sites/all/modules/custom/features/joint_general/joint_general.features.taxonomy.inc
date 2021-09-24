<?php
/**
 * @file
 * joint_general.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function joint_general_taxonomy_default_vocabularies() {
  return array(
    'area' => array(
      'name' => 'תחום',
      'machine_name' => 'area',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '4',
    ),
    'partners' => array(
      'name' => 'Partnerships',
      'machine_name' => 'partners',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '4',
    ),
  );
}
