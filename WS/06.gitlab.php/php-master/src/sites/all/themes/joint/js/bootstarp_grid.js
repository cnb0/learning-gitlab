
var Drupal = Drupal || {};

(function ($, Drupal) {
    $(document).ready(function () {
    });
})(jQuery, Drupal);


/*view load more- remove space and position in two col.  */
(function ($) {
    Drupal.behaviors.ViewsLoadMore_ = {
        attach: function (context, settings) {
            $(document).ready(function () {
                var count;
                if (typeof (context) == 'object') {
                    var $context = $(context[0]); //view specific 
                    // <editor-fold defaultstate="collapsed" desc="Vertical">
                    var view = $context.find('.views-bootstrap-grid-plugin-style.views-row-first');
                    var width = '.col-lg-6';
                    var column = 2;
                    if (view.find('.row').length >= 1) {
                        elem_last = $('.views-bootstrap-grid-plugin-style.views-row-last');
                        var check = view.find(width)[0];
                        if (check == undefined) {
                            width = '.col-lg-4';
                            column = 3;
                        }
                        count = $(this).children().length;
                        last_first = $(this).children(count - 1);
                        elem_last.find(width).length;
                        elem_last.find(width).each(function (i) {
                            switch (i % column) {
                                case 0:
                                    view.find(width).eq(0).children().last().after($(this).children());
                                    break;
                                case 1:
                                    view.find(width).eq(1).children().last().after($(this).children());
                                    break;
                                case 2:
                                    view.find(width).eq(2).children().last().after($(this).children());
                                    break;
                            }
                        });
                        $('.views-bootstrap-grid-plugin-style.views-row-last').remove();
                        
                    }
                    // </editor-fold>
                    
                }
            });
        }
    }
    
})(jQuery);
