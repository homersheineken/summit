(function($) {

    $(document).ready(function() {

        var $day1 = $("#views_slideshow_pager_field_item_top_agenda-block_1_0");
        var $day2 = $("#views_slideshow_pager_field_item_top_agenda-block_1_9");
        var $desc = $(".field-name-field-agenda-session-description");
        $day1.click(function (){
            $day1.addClass("active");
            $day2.removeClass("active");
            $desc.hide();
        });

        $day2.click(function (){
            $day2.addClass("active");
            $day1.removeClass("active");
            $desc.hide();
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

        var ss_block =$('#views_slideshow_cycle_teaser_section_agenda-block_1');
        var div_height = ss_block.height();
        jQuery(".accord img").click(function () {
            var move = this.parentNode.parentNode.nextSibling;
            $(move).slideToggle(400, function () {
                var seen = $(".field-name-field-agenda-session-description:visible").length;
                ss_block.css('max-height',div_height + 130 * seen);
            });

        });




        (function(document, history, location) {
            var HISTORY_SUPPORT = !!(history && history.pushState);

            var anchorScrolls = {
                ANCHOR_REGEX: /^#[^ ]+$/,
                OFFSET_HEIGHT_PX: 76,

                /**
                 * Establish events, and fix initial scroll position if a hash is provided.
                 */
                init: function() {
                    this.scrollToCurrent();
                    window.addEventListener('hashchange', this.scrollToCurrent.bind(this));
                    document.body.addEventListener('click', this.delegateAnchors.bind(this));
                },

                /**
                 * Return the offset amount to deduct from the normal scroll position.
                 * Modify as appropriate to allow for dynamic calculations
                 */
                getFixedOffset: function() {
                    return this.OFFSET_HEIGHT_PX;
                },

                /**
                 * If the provided href is an anchor which resolves to an element on the
                 * page, scroll to it.
                 * @param  {String} href
                 * @return {Boolean} - Was the href an anchor.
                 */
                scrollIfAnchor: function(href, pushToHistory) {
                    var match, rect, anchorOffset;

                    if(!this.ANCHOR_REGEX.test(href)) {
                        return false;
                    }

                    match = document.getElementById(href.slice(1));

                    if(match) {
                        rect = match.getBoundingClientRect();
                        anchorOffset = window.pageYOffset + rect.top - this.getFixedOffset();
                        window.scrollTo(window.pageXOffset, anchorOffset);

                        // Add the state to history as-per normal anchor links
                        if(HISTORY_SUPPORT && pushToHistory) {
                            history.pushState({}, document.title, location.pathname + href);
                        }
                    }

                    return !!match;
                },

                /**
                 * Attempt to scroll to the current location's hash.
                 */
                scrollToCurrent: function() {
                    this.scrollIfAnchor(window.location.hash);
                },

                /**
                 * If the click event's target was an anchor, fix the scroll position.
                 */
                delegateAnchors: function(e) {
                    var elem = e.target;

                    if(
                        elem.nodeName === 'A' &&
                        this.scrollIfAnchor(elem.getAttribute('href'), true)
                    ) {
                        e.preventDefault();
                    }
                }
            };

            window.addEventListener(
                'DOMContentLoaded', anchorScrolls.init.bind(anchorScrolls)
            );
        })(window.document, window.history, window.location);

    });

})(jQuery);