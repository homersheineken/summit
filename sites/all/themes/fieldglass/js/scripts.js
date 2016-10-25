(function($) {
  return Drupal.behaviors.fieldglass = {
    attach: function() {
      $('img').each(function() {
        //this.src = this.src.replace(/glass.local/g, "glass1.phamilydev.net");
		     this.src = this.src.replace(/fieldglass.localhost/g, "glass1.phamilydev.net");
      });
      var $nextPager, $pager, $prevPager, $nextPagerSmall, $prevPagerSmall;
      $("#zone-menu .view-megamenu").css({
        top: function() {
          return $("#zone-menu").outerHeight();
        }
      });
      $prevPager = $("<div class=\"pager-prev\" />").css({
        background: "url(/sites/all/themes/fieldglass/img/pager-prev.png) left center no-repeat",
        width: "21px",
        height: "34px"
      });
      $nextPager = $("<div class=\"pager-next\" />").css({
        background: "url(/sites/all/themes/fieldglass/img/pager-next.png) left center no-repeat",
        width: "21px",
        height: "34px"
      });
      $prevPagerSmall = $("<div class=\"pager-prev\" />").css({
        background: "url(/sites/all/themes/fieldglass/img/pager-prev-small.png) left center no-repeat",
        width: "12px",
        height: "20px"
      });
      $nextPagerSmall = $("<div class=\"pager-next\" />").css({
        background: "url(/sites/all/themes/fieldglass/img/pager-next-small.png) left center no-repeat",
        width: "12px",
        height: "20px"
      });

      if ($("body").hasClass("page-node-29") || $("body").hasClass("page-node-41")) {
        $("#block-views-team-member-blocks-block, #block-views-team-member-blocks-block-1, #block-views-team-member-blocks-block-2, #block-views-team-member-blocks-block-3, #block-views-team-member-blocks-block-4, #block-views-team-member-blocks-block-5, #block-views-team-member-blocks-block-6, #block-views-team-member-blocks-block-7, #block-views-front-page-meet-our-team-block").append($prevPager, $nextPager);
        $("#block-views-team-member-blocks-block .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block"),
          next: $(".pager-next", "#block-views-team-member-blocks-block")
        });
        $("#block-views-team-member-blocks-block-1 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-1"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-1")
        });
        $("#block-views-team-member-blocks-block-2 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-2"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-2")
        });
        $("#block-views-team-member-blocks-block-3 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-3"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-3")
        });
        $("#block-views-team-member-blocks-block-4 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-4"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-4")
        });
        $("#block-views-team-member-blocks-block-5 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-5"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-5")
        });
        $("#block-views-team-member-blocks-block-6 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-6"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-6")
        });
        $("#block-views-team-member-blocks-block-7 .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-team-member-blocks-block-7"),
          next: $(".pager-next", "#block-views-team-member-blocks-block-7")
        });                
        $("#block-views-front-page-meet-our-team-block .view-content").cycle({
          speed: "300",
          timeout: "300000",
          fx: "scrollHorz",
          easing: "easeInOutQuart",
          prev: $(".pager-prev", "#block-views-front-page-meet-our-team-block"),
          next: $(".pager-next", "#block-views-front-page-meet-our-team-block")
        });
      }
      if ($("body").hasClass("page-company-team-executives")) {
        if ($(".view-executive-team-members .views-row").length > 1) {
          // Add a special simple link pager to the page bottom
          $footerPager = '<div class="footer-pager">« <span class="pager-prev">previous</span> - <span class="pager-next">next</span> »</div>';
          $(".view-executive-team-members .views-row").append($footerPager);
          
          
          // Header arrow pager
          $(".view-executive-team-members").prepend($prevPagerSmall, $nextPagerSmall);
          
          // Cycle on any pager
          $(".view-executive-team-members .view-content").cycle({
            speed: "500",
            timeout: 0,
            fx: "fade",
            easing: "easeInOutQuart",
            prev: $(".pager-prev"),
            next: $(".pager-next")
          });
        }
      }

			//Resources & Events carousels
      if ($("body").hasClass("context-resources")) {
        $pager = $("<div id=\"pager\" />").css({
          position: "absolute",
          right: "30px",
          bottom: "30px",
          zIndex: "10"
        });
        $(".view-front-page-carousel").append($pager);
        $(".view-front-page-carousel .view-content").cycle({
          pager: $("#pager"),
          speed: "1500",
          timeout: "6000",
          pause: 1
        });
			}

      if ($("body").hasClass("front")) {
        $pager = $("<div id=\"pager\" />").css({
          position: "absolute",
          left: "850px",
          top: "380px",
          zIndex: "10"
        });
        $("#block-views-front-page-carousel-block").append($pager);
        $("#block-views-front-page-carousel-block .view-content").cycle({
          pager: $("#pager"),
          speed: "1500",
          timeout: "6000",
          pause: 1
        });
        $(".front-resources ul.left a").each(function(index) {
          var $div, link;
          link = this.pathname;
          $div = $("<div class=\"" + index + " slide\"></div>");
          $(".front-resources div.ajax-content").append($div);
          $("div." + index).load("" + link + " .view-front-page-slideshow .views-row-first");
          return $(this).click(function(e) {
            return e.preventDefault();
          });
        });
        $(".front-resources .ajax-content").cycle({
          speed: "1500",
          timeout: "8000",
          pager: $(".front-resources ul.left"),
          pagerAnchorBuilder: function(idx, slide) {
            return ".front-resources ul.left li:eq(" + idx + ") a";
          },
          height: 220
        });

        $("#block-views-front-page-meet-our-team-block, #block-views-front-page-by-the-numbers-block").append($prevPager, $nextPager);
        $("#block-views-front-page-meet-our-team-block .view-content").cycle({
          speed: "100",
          timeout: "60000",
          width: 267,
          fx: "scrollHorz",
          easing: "easeInOutQuad",
          prev: $("#block-views-front-page-meet-our-team-block .pager-prev"),
          next: $("#block-views-front-page-meet-our-team-block .pager-next")
        });

        return $("#block-views-front-page-by-the-numbers-block .view-content").cycle({
          speed: "100",
          timeout: "60000",
          width: 300,
          fx: "scrollHorz",
          easing: "easeInOutQuad",
          prev: $("#block-views-front-page-by-the-numbers-block .pager-prev"),
          next: $("#block-views-front-page-by-the-numbers-block .pager-next")
        });
      }
    }
  };
})(jQuery);
