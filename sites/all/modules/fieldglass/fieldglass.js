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
        /*********/
        var ss_block =$('#views_slideshow_cycle_teaser_section_agenda-block_1');
        var div_height = ss_block.height();
        var screen_width = $(document).width();
        jQuery(".accord img").click(function () {
            var move = this.parentNode.parentNode.nextSibling;
            $(move).slideToggle(400, function () {
                var toggle = 'toggle';
                resize_div(toggle);
            });

        });
        $(window).resize(function() {
            var toggle;
            screen_width > 667 ? toggle = 'big' : null;
            resize_div(toggle);
        });

        function resize_div (toggle){
            var screen_size = $(document).width();
            var height = 0;
            //screen_size > 667 ? height = 400 : height = 700;
            if (screen_size > 850) {
                height = 400;
            } else if (screen_size >500) {
                height=600;
            } else {
                height = 700;
            }

            //screen_size < 667 && toggle == 'toggle' ? height = height + 300 : null;

            //screen_size > 667 && toggle == 'toggle' ? height = height + 300 : null;

            //screen_size < 667 && toggle == 'big' ? height = height + 300 : height = 0;
            //screen_size > 667 && toggle == 'big' ? height = height - 300 : null;
            var seen = $(".field-name-field-agenda-session-description:visible").length;
            var total = height  + 200 * seen;
            ss_block.css('height',total);
            ss_block.css('max-height',total);
            screen_width = $(document).width();
        }


        jQuery(".front .field-type-cck-time").each(function (index, value){
            var time = this.innerText;
            this.innerText = convert_to_24h(time);
        });
        jQuery(".front .field-name-field-agenda-item-end-time ").prepend('<span>&nbsp;-&nbsp;</span>');

        /**********************/
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
        function convert_to_24h(timeStr) {
            timeStr = timeStr.slice(0,-1);
            var colon = timeStr.indexOf(':');
            var hours = timeStr.substr(0, colon),
                minutes = timeStr.substr(colon+1, 2),
                meridian = timeStr.substr(colon+3, 2).toUpperCase();

            meridian == "P" ? meridian="PM" : null;
            var hoursInt = parseInt(hours, 10),
                offset = meridian == 'PM' ? 12 : 0;

            if (hoursInt === 12) {
                hoursInt = offset;
            } else {
                hoursInt += offset;
            }
            return hoursInt + ":" + minutes;
        }

    });

})(jQuery);