(function($) {
  return Drupal.behaviors.fieldglass_summit = {
    attach: function() {

      if ($('body').hasClass('page-node-5')) {
        $tipsblock = $('#block-views-travel-tips-block');
        $tipshead = $tipsblock.find('.block-title');
        $tipscontent = $tipsblock.find('.content');

        //$tipsblock.css('background', 'red');

        $tipshead.css('cursor', 'pointer');

        $tipscontent.hide();

        $tipshead.click(function() {
          $tipscontent.slideToggle('slow');
        });

      }
    }
  };
})(jQuery);
