(function($) {

    $(document).ready(function() {

        var $day1 = $("#views_slideshow_pager_field_item_top_faq-page_1_0");
        var $day2 = $("#views_slideshow_pager_field_item_top_faq-page_1_1");
        var $day3 = $("#views_slideshow_pager_field_item_top_faq-page_1_2");
        var $day1panel = $(".wrapper-class1");
        var $day2panel = $(".wrapper-class2");
        var $day3panel = $(".wrapper-class3");
        var $prev = $("#vscc_controls_previous_faq-page_1");
        var $next = $("#vscc_controls_next_faq-page_1");

        $day1.click(function (){
            $day1.addClass("active").addClass("views_slideshow_active_pager_field_item");
            $day2.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day3.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day1panel.show();
            $day2panel.hide();
            $day3panel.hide();
        });

        $day2.click(function (){
            $day1.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day2.addClass("active").addClass("views_slideshow_active_pager_field_item");
            $day3.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day1panel.hide();
            $day2panel.show();
            $day3panel.hide();
        });

        $day3.click(function (){
            $day1.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day2.removeClass("active").removeClass("views_slideshow_active_pager_field_item");
            $day3.addClass("active").addClass("views_slideshow_active_pager_field_item");
            $day1panel.hide();
            $day2panel.hide();
            $day3panel.show();
        });

        $prev.click(function (){
            var $prev = $('.active').removeClass('active').removeClass("views_slideshow_active_pager_field_item").prev('.views-slideshow-pager-field-item');
            if ($prev.length) {
                $prev.addClass('active').addClass("views_slideshow_active_pager_field_item");
                var $newone = $(".agenda-item:visible");
                $newone.prev().show();
                $newone.hide();
            }
            else {
                $(".views-slideshow-pager-field-item:last").addClass('active').addClass("views_slideshow_active_pager_field_item");
                $day1panel.hide();
                $day2panel.hide();
                $day3panel.show();
            }
        });

        $next.click(function (){
            var $next = $('.active').removeClass('active').removeClass("views_slideshow_active_pager_field_item").next('.views-slideshow-pager-field-item');
            if ($next.length) {
                $next.addClass('active').addClass("views_slideshow_active_pager_field_item");
                var $newone = $(".agenda-item:visible");
                $newone.next().show();
                $newone.hide();
            }
            else {
                $(".views-slideshow-pager-field-item:first").addClass('active').addClass("views_slideshow_active_pager_field_item");
                $day1panel.show();
                $day2panel.hide();
                $day3panel.hide();
            }
        });
    });

})(jQuery);