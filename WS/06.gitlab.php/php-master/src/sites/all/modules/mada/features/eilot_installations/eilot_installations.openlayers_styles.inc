<?php
/**
 * @file
 * eilot_installations.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function eilot_installations_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'Installation_term_marker';
  $openlayers_styles->title = 'Installation term marker';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => 'http://www.renewable-energy-eilat.org${field_field_marker_path}',
    'pointRadius' => 20,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['Installation_term_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'Installation_term_marker_future';
  $openlayers_styles->title = 'Future Installation term marker';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => 'http://www.renewable-energy-eilat.org${field_field_marker_path}',
    'pointRadius' => 16,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 0.5,
    'labelAlign' => 'cm',
  );
  $export['Installation_term_marker_future'] = $openlayers_styles;

  return $export;
}
