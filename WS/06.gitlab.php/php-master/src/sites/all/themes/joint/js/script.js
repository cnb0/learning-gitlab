
/**
 * @file
 * A JavaScript file for the theme.
 *
 */

(function ($, Drupal, window, document, undefined) {


		
     $(document).ready(function () { 

	 /* main menu */
	 $(".clickable-menu").attr("data-toggle","none");

	//$('#lang-dropdown-select-language').parent().append('<ul id="newyearfilter" name="lang_dropdown_select"></ul>');
	//$('#lang-dropdown-select-language option').each(function(){
	//$('#newyearfilter').append('<li value="' + $(this).val() + '">'+$(this).text()+'</li>');});
	//$('#yearfilter').remove();
	//$('#newyearfilter').attr('id', 'lang-dropdown-select-language');
	 
	 
	 
// ---------------  image alts -----------------	
        $("img").each(function() {
                var self = $(this);
                //console.log($(this).attr('alt'));
                if(self.attr('alt') == '' || self.attr('alt') == '.' || !self.attr('alt')){
                        var alt; // =$(this).closest( "li").find(".image-alt").text();

                        /*if(alt!=''||alt!='.'){
                                $(this).attr('alt',alt);
                        }*/
                        alt = self.closest("li").find(".item-title a").text();				
                        if(alt){
                                self.attr('alt',alt);
                                return;
                        }                             
                        alt = self.closest( ".magazine-item").find(".item-title a").text();
                        if(alt){
                            self.attr('alt',alt);
                            return;
                        }
                        alt = self.closest(".col").find(".item-title").text();				
                        if(alt){
                                self.attr('alt',alt);
                                return;
                        } 
                        self.attr('alt',$( ".main-title").text());

                }

        });
		
		$(".image-alt-field").each(function() {
			if ($(this).text() != '') {
				$(this).parent().parent().find("img").attr("alt", $(this).text());
			}
		});
        
       
        $(".form-search .btn-default").text("Search");

	$(".main-menu-contact-us").attr("href", "#edit-submitted-full-name");
      
		
// -------------- year filters ------------------        
        if ($('#edit-year-wrapper').length) {
            $("#edit-year option:lt(92)").remove();
            $(".form-type-bef-link:lt(92)").remove();
        }
        
// --------------- mobile menu ------------------
        $("nav.responsive_menu li.expanded.dropdown").each(function() {
            
            var self = $(this);
            var ulCurr = self.find("ul");
            var expandedLink = $("<a class=\"arrow-sub-menu\">+</a>");
            
            if (ulCurr.css('display') == 'block')
                expandedLink.addClass('Opened');
            
            expandedLink.click(function(){
           
               var selfLink = $(this);
               var display = 'none';
               var addClass = "";
                
               if (ulCurr.css('display') == 'none') {
                   display = 'block';
                   addClass = "Opened";
               }
               
               //close all
               $("nav.responsive_menu .dropdown-menu").hide();
               $("nav.responsive_menu a").removeClass("Opened");
               
               //open or close current
               ulCurr.css('display', display);
               selfLink.addClass(addClass);
              
            });
            
            self.append($(expandedLink));
            
        });
        
        // program page - infographic icons
        if ($(".node-type-program #infographic_icons").length != 0){
            
            var max = 0;
            $(".partners_cnt").each(function() {
                var num = parseInt($(this).text(), 10);
                if ((max===null) || (num > max)) { max = num; }
              });
            $("#infographic_icons .partners .icon-counter").text(max);
            
            max = 0;
            $(".research_cnt").each(function() {
                var num = parseInt($(this).text(), 10);
                if ((max===null) || (num > max)) { max = num; }
              });
            $("#infographic_icons .researches .icon-counter").text(max);
            
            if ($(".development-level").length != 0) {
                $("#infographic_icons .development-level .icon-text").text(Drupal.t($('#development_level').text()));
            }
            
            if ($("#infographic_icons .target-population").length != 0) {
                var str = $('#target_population_num').text();
                str = str.replace(/\s/g, '');
                $("#infographic_icons .target-population .icon-counter").text(str);
            } 
            if ($("#infographic_icons .locations").length != 0) {
                var str = $('#locations_cnt').text();
                str = str.replace(/\s/g, '');
                $("#infographic_icons .locations .icon-counter").text(str);
            } 
        }
                
        //hide empty tabs      
        if ($('.view-display-id-success_stories .view-content').length == 0) {
            $(".success-stories-tab").css("display", "none");
            $('#success_stories').removeClass("print");
        }
        if ($('.style-researches').length == 0) {
            $(".program-researches-tab").css("display", "none");
            $('#program_research').removeClass("print");
        }

        
	// area page - infographic icons
        if ($(".node-type-area #infographic_icons").length != 0){
            var cnt = 0;
            $(".item-target-population-cnt").each(function() {
                var str = $(this).text();
                str = str.replace(/\s/g, '');
                cnt += parseInt(str, 10);
            });
            $("#infographic_icons .target-population .icon-counter").text(cnt);            
            
            max = 0;
            $(".research_cnt").each(function() {
                var num = parseInt($(this).text(), 10);
                if ((max===null) || (num > max)) { max = num; }
              });
            $("#infographic_icons .researches .icon-counter").text(max);
            
			if ($("#infographic_icons .locations").length != 0) {
                var str = $('#field_locations_area').text();
                str = str.replace(/\s/g, '');
                $("#infographic_icons .locations .icon-counter").text(str);
            } 
			
			cnt = 0;
            $(".openlayers-views-map svg image").each(function() {
                var str = $(this).attr("r");
				console.log(str);
                cnt += parseInt(str, 10);
            });
			$(".openlayers-views-map svg circle").each(function() {
                var str = $(this).attr("r");
				console.log(str);
                cnt += str % 10;
            });
            $("#infographic_icons .locations .icon-counter").text(cnt);          
			
            //hide empty tabs
			if ($('.style-researches').length == 0) {
				$(".area-researches-tab").css("display", "none");
			}
            
        }	
	
        
        $('.style-researches .file a').attr('target','_blank');



		
		
		
		
/*
function GetURLParameter(sParam){
    var sPageURL = window.location.search.substring(1);
    var sURLVariables = sPageURL.split('&');
    for (var i = 0; i < sURLVariables.length; i++) 
    {
        var sParameterName = sURLVariables[i].split('=');
        if (sParameterName[0] == sParam) 
        {
            return sParameterName[1];
        }
    }
}


var start = GetURLParameter('start');

if(start.length>0){
	$('#start-filter a[href="people?field_staff_type_tid=All&title=&start='+start+'"]').addClass('active-letter');
}

		if($("#block-views-gallery-block-1 .slides li img").length==0){
			$("#block-views-gallery-block-1").remove();
		}else if($("#block-views-gallery-block-1 .slides li").length<2){
			$("#block-views-gallery-block-1 .flex-pause").remove();
		}		
		
		
		if($(".not-front").length!=0&&$(".top-wrapper-image").length==0){
			$(".top-wrapper-image").remove();
			$("#navbar").after('<div class="top-wrapper-image"><img src="/sites/default/files/styles/960x360/public/hd-lightning-wallpaper-1.jpg?"><div class="item-title-wrapper"></div></div>');
		}
		
		$("#block-search-form .btn-default").attr("alt","Search");
*/		
     });     

	
})(jQuery, Drupal, this, this.document);


//----------------------for add another-js will work only with  Drupal.behaviors.mymodule-------------

( function ($) {
    Drupal.behaviors.mymodule = {
        attach: function(context,settings) {

     $(document).ready(function () {          
    
/*
    $( ".month-view .month a" ).each(function( ) {
      var month_day = $( this ).text();
      $( this ).parent().append(month_day);
      $( this ).remove();
    });

    $( '.date-next a' ).text('>');
    $( '.date-prev a' ).text('<'); 
	
	$('.field-name-body').before($( '#block-views-gallery-block-1' ));

	
	
	*/
	
	
	
	
	

     });     

        }
  };
})(jQuery);
