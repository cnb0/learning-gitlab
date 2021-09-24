
/**
 * @file
 * A JavaScript file for the theme.
 *
 */

(function ($, Drupal, window, document, undefined) {

    $(document).ready(function () {
        var tabs = "";
        var id = "";
        $('.view-routes .view-content h3').each(function () {
            id = $(this).next().find('.views-field-nid span').text();
            tabs += '<div class="tabs_routes" id="' + id + '">' + $(this).text() + '</div>';
        });
        $('.view-routes .view-content').before('<div class="view-header">' + tabs + '</div>');
        //once
        $('.view-routes .view-header .tabs_routes:first-child').addClass('open');
        var class_ = $('.view-routes .view-header .tabs_routes:first-child').attr('id');
        $('.' + class_).slideDown('200');
        
        $('.view-routes .view-header .tabs_routes').click(function () {
            $('.view-routes .view-header .tabs_routes').removeClass('open');
            $(this).toggleClass('open');
            var class_ = $(this).attr('id');
            $('.view-routes .view-content .tab_content').slideUp('100');
            $('.' + class_).slideDown('200');
            $('.view-routes .views-field-field-image-slider .field-content').slick('setPosition');
        });
        var lang = $('html').attr('dir');
        if (lang == 'ltr') {
            lang = false;
        }
        else {
            lang = true;
        }

        $('.view-routes .views-field-field-image-slider .field-content').slick({
            accessibility: true,
            adaptiveHeight: false,
            arrows: true,
            asNavFor: null,
            prevArrow: '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">Previous</button>',
            nextArrow: '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">Next</button>',
            autoplay: true,
            autoplaySpeed: 2000,
            centerMode: false,
            centerPadding: '0px',
            cssEase: 'ease',
            dots: false,
            dotsClass: 'slick-dots',
            draggable: true,
            easing: 'linear',
            edgeFriction: 0.35,
            fade: false,
            focusOnSelect: false,
            infinite: true,
            initialSlide: 0,
            lazyLoad: 'ondemand',
            mobileFirst: false,
            pauseOnHover: true,
            pauseOnFocus: true,
            pauseOnDotsHover: false,
            respondTo: 'window',
            rows: 1,
            rtl: lang,
            slide: '',
            slidesToShow: 0,
            slidesToScroll: 1,
            speed: 500,
            swipe: true,
            swipeToSlide: false,
            touchMove: true,
            touchThreshold: 5,
            useCSS: true,
            useTransform: true,
            variableWidth: false,
            vertical: false,
            verticalSwiping: false,
            waitForAnimate: false,
            zIndex: 1000,
            responsive: [
                {
                    breakpoint: 1960,
                    settings: {
                        slidesToShow: 7,
                        slidesToScroll: 1,
                        infinite: true,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 1700,
                    settings: {
                        slidesToShow: 6,
                        slidesToScroll: 1,
                        infinite: true,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 1440,
                    settings: {
                        slidesToShow: 5,
                        slidesToScroll: 1,
                        infinite: true,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 1180,
                    settings: {
                        slidesToShow: 4,
                        slidesToScroll: 1,
                        infinite: true,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 920,
                    settings: {
                        slidesToShow: 3,
                        slidesToScroll: 3,
                        infinite: true,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 660,
                    settings: {
                        slidesToShow: 2,
                        slidesToScroll: 2,
                        dots: false,
                        rtl: true,
                    }
                },
                {
                    breakpoint: 400,
                    settings: {
                        slidesToShow: 1,
                        slidesToScroll: 1,
                        dots: false,
                        rtl: true,
                    }
                }
            ]
        });

        $("ul.menu .dropdown-toggle").each(function () {
            $(this).attr("aria-haspopup", "true");
            $(this).attr("aria-expanded", "true");
        });

        $(".clickable-menu").attr("data-toggle", "none");
        // $(".main-menu-contact-us").attr("href", "#edit-submitted-full-name");

        if ($("#infographic_icons .target-population").length != 0) {
            var str = $('#field_population_count').text();
            $("#infographic_icons .target-population .icon-text").text(str);
        }


        /** signupsupportedhousing **/
            $(".page-node-1302 .top-wrapper-image").append($('#block-webform-client-block-1301'));
            $($('#block-block-46')).insertAfter(".page-node-1302 .top-wrapper-image");
            $('#block-webform-client-block-1301 header, #block-webform-client-block-1301 .field-name-body').wrapAll('<div class="title_body">');
            $('#block-webform-client-block-1301 header a').removeAttr('href');
        /**/

    });


})(jQuery, Drupal, this, this.document);

