jQuery( document ).ready(function() {
    var width = jQuery(window).width();
    if (width > 1024) {
        var logo = jQuery("#logo");
        logo.attr("src","/sites/default/files/fgsummit_logo_rings.png");
        var isVisible = false;

        jQuery(window).scroll(function() {
            var scroll = jQuery(window).scrollTop();
            if (scroll >= 25) {
                logo.attr("src","/sites/default/files/summit_logo_noring.png");
                logo.addClass('logoswap');
                /*logo.css('margin-top', '75px');
                jQuery("div#region-menu-first").css("margin-top", "46");
                jQuery("div#region-menu-second").css("margin-top", "47");*/
            } else {
                logo.attr("src","/sites/default/files/fgsummit_logo_rings.png");
                logo.removeClass('logoswap');
            }
            //Black Bar Stuff
            var block25 =jQuery('#block-block-25');
            var shouldBeVisible = jQuery(window).scrollTop()>50;
            if (shouldBeVisible && !isVisible) {
                isVisible = true;
                block25.slideToggle( 10 );
            } else if (isVisible && !shouldBeVisible) {
                isVisible = false;
                block25.slideToggle( 10 );
            }
        });
    }

});

/****************/
