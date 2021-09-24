<?php

/**
 * @file
 * accessibility.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function accessibility_context_default_contexts() {
    $export = array();

    $context = new stdClass();
    $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
    $context->api_version = 3;
    $context->name = 'accessibility';
    $context->description = 'accessibility';
    $context->tag = '';
    $context->conditions = array(
      'sitewide' => array(
        'values' => array(
          1 => 1,
        ),
      ),
    );
    $context->reactions = array(
      'block' => array(
        'blocks' => array(
          'high_contrast-high_contrast_switcher' => array(
            'module' => 'high_contrast',
            'delta' => 'high_contrast_switcher',
            'region' => 'accessibility',
            'weight' => '-10',
          ),
          'text_resize-0' => array(
            'module' => 'text_resize',
            'delta' => '0',
            'region' => 'accessibility',
            'weight' => '-9',
          ),
        ),
      ),
    );
    $context->condition_mode = 0;

    t('accessibility');

    $export[$context->name] = $context;

    return $export;
}
