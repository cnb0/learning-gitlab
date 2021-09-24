(function($) { // JavaScript should be compatible with other libraries than jQuery
    Drupal.behaviors.fatfishContrast = {// D7 "Changed Drupal.behaviors to objects having the methods "attach" and "detach"."
        attach: function(context) {
            if ($.cookie('fatfish_contrast') == 1) {
                $('body').addClass('high-contrast');
            }
// Changer links will change the text size when clicked
            $('a.contrast-changer').click(function() {
                if ($.cookie('fatfish_contrast') != 1) {
                    $('body').addClass('high-contrast');
                    $.cookie('fatfish_contrast', 1, {expires: 7});
                }
                else {
                    $('body').removeClass('high-contrast');
                    $.cookie('fatfish_contrast', 0, {expires: 7});
                }
            });
        }
    }
})(jQuery);