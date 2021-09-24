(function($){
    $(function(){
        Drupal.settings.nid = Drupal.settings.nid || [];
        Drupal.settings.getAllFeature;
        
        function my_map() {
            Drupal.settings.getAllFeature = $('.openlayers-map').data('openlayers').openlayers.layers[1];
            var all_features = Drupal.settings.getAllFeature.features;
            for (var key in all_features) {
                var feature = all_features[key];
                Drupal.settings.nid[feature.data.nid] = key;
            }
        }

        function show_popup(nid) {
            if (Drupal.settings.nid) {
                var index = Drupal.settings.nid[nid];
                var feature = Drupal.settings.getAllFeature.features[index];
                Drupal.openlayers.popup.popupSelect.clickFeature(feature);
            } 
            return false;
        }

        my_map();
        $('#block-views-node-openlayer-map-block-2 .views-field-title').each(function(){
            
            $(this).click(function(){
                nid = $(this).parent().children('.views-field-nid').children('.field-content').text();
                lat = $(this).parent().children('.views-field-field-geo-location').children('.field-content').text();
                lon = $(this).parent().children('.views-field-field-geo-location-1').children('.field-content').text();
                var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
                var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
               
               // set zoom
                if(ol.openlayers.zoom != 11) {
                    ol.openlayers.zoomTo(11);
                }
                
                // pan layer
                ol.openlayers.panTo(lonLat);
               
                // show popup
                show_popup(nid);
                
              
            })
        });
      
    });
})(jQuery);