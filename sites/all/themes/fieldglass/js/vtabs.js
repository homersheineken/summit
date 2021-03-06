// Generated by CoffeeScript 1.3.1

(function($) {
  return Drupal.behaviors.vtabs = {
    attach: function() {
        $('.vtab_parent a').click(function() {
          $('.content-vtabs .views-row').removeClass('active_vtab');
          $(this).parent().parent().parent().addClass('active_vtab');
          var child_height = $('.active_vtab .vtab_child').outerHeight();
          if (child_height > $('.content-vtabs').height()) {
            $('.content-vtabs').height(child_height + 1);
          }
          else {
            $('.active_vtab .vtab_child').height($('.content-vtabs').height());
          }
          return false;
        });
        $('.vtab_parent a').filter(":first").trigger('click');
    }
  };
})(jQuery);
