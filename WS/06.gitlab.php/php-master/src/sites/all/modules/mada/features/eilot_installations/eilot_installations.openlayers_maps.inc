<?php
/**
 * @file
 * eilot_installations.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function eilot_installations_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'installations_map';
  $openlayers_maps->title = 'Installations List (For Block)';
  $openlayers_maps->description = 'Map showing  installations location';
  $openlayers_maps->data = array(
    'width' => '410px',
    'height' => '600px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '35.024432387018, 30.451014669003',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
          'node_openlayer_map_installation' => 'node_openlayer_map_installation',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'node_openlayer_map_installation',
        'point_zoom_level' => '10',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'node_openlayer_map_installation' => 'node_openlayer_map_installation',
      'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
    ),
    'layer_weight' => array(
      'node_openlayer_map_installation' => '0',
      'node_openlayer_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_openlayer_map_openlayers_1' => 'default_marker_red',
      'node_openlayer_map_installation' => 'mada_logo',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_openlayer_map_openlayers_1' => '0',
      'node_openlayer_map_installation' => '0',
    ),
    'layer_activated' => array(
      'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
      'node_openlayer_map_installation' => 'node_openlayer_map_installation',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_openlayer_map_installation' => 0,
      'node_openlayer_map_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_gold',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['installations_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'installations_map_page';
  $openlayers_maps->title = 'Installation List (For Page)';
  $openlayers_maps->description = 'Map showing  installations location';
  $openlayers_maps->data = array(
    'width' => '525px',
    'height' => '600px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '35.054350334973, 29.98217507643',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
          'node_openlayer_map_installation' => 'node_openlayer_map_installation',
        ),
        'distance' => '22',
        'threshold' => '50',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
          'node_openlayer_map_installation' => 'node_openlayer_map_installation',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'node_openlayer_map_installation',
        'point_zoom_level' => '11',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
    ),
    'default_layer' => 'google_hybrid',
    'layers' => array(
      'google_hybrid' => 'google_hybrid',
      'node_openlayer_map_installation' => 'node_openlayer_map_installation',
      'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
    ),
    'layer_weight' => array(
      'node_openlayer_map_installation' => '0',
      'node_openlayer_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_openlayer_map_openlayers_1' => 'Installation_term_marker',
      'node_openlayer_map_installation' => 'Installation_term_marker_future',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_openlayer_map_openlayers_1' => 'Installation_term_marker',
      'node_openlayer_map_installation' => 'Installation_term_marker_future',
    ),
    'layer_activated' => array(
      'node_openlayer_map_openlayers_1' => 'node_openlayer_map_openlayers_1',
      'node_openlayer_map_installation' => 'node_openlayer_map_installation',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'node_openlayer_map_openlayers_1' => 0,
      'node_openlayer_map_installation' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'Installation_term_marker',
      'select' => 'Installation_term_marker',
      'temporary' => 'default',
    ),
  );
  $export['installations_map_page'] = $openlayers_maps;

  return $export;
}
