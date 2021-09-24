(function ($) {
    $(document).ready(function () {
        $(".region-accessibility").hide();
        $("#accessibility_button").click(function () {
            $(".region-accessibility").fadeToggle(400);
            $("#accessibility_button").toggleClass('open_menu');
        });
    });
})(jQuery);