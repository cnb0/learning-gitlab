<?php
/**
 * @file
 * accessibility.features.inc
 */

/**
 * Implementation hook_ctools_plugin_api().
 *
 * Makes module compatible with context 3.
 */
function accessibility_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
