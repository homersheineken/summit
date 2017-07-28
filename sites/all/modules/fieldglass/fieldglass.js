(function($) {

    $(document).ready(function() {

        var $day1 = $("#views_slideshow_pager_field_item_top_agenda-block_1_0");
        var $day2 = $("#views_slideshow_pager_field_item_top_agenda-block_1_9");

        $day1.click(function (){
            $day1.addClass("active");
            $day2.removeClass("active");
        });

        $day2.click(function (){
            $day2.addClass("active");
            $day1.removeClass("active");
        });

        var titles = jQuery(".page-node-174 .field-name-field-agenda-item-session-title");
        jQuery.each(titles, function(i, val) {
            if (this.nextElementSibling){
                var child = this.firstChild.innerHTML;
                var image ='<span class="accord"><img src="/sites/default/files/hp_assets/Read More@2x.png"  height="10px" width="15px"/></span>';
                this.innerHTML = child + image;
            }
        });
        jQuery(" .page-node-174 .field-name-field-agenda-session-description").hide();
        jQuery(".accord img").click(function () {
            var move = this.parentNode.parentNode.nextSibling;
            $(move).slideToggle(400);
        });
    });

})(jQuery);