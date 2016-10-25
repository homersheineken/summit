Hi, John here.  It's 4/19 and my wife is due to have a baby on 4/20, so I'm leaving some todos and instructions here just in case I don't get to them today or tomorrow.

What remains to be done is pretty basic AFAIK.  I have a list of theming tasks in the Boss, I'm sure Slurpee will assign you to them if necessary.  There are a couple of JS slideshows that need to be placed in the resources section.  Last I checked Cody hadn't built out the machinery for those yet.  I've been accomplishing pretty much all the JS stuff on the site with Malsup's cycle plugin.  You can find docs and reference here --

jquery.malsup.com/cycle

I've got most of the various permutations of functionality already done - those pager/slider things for team members, the carousel on the front page.  You should be able to mostly copy the code if you're not already familiar with cycle.

CSS wise, it's pretty straightforward.  There is a "shadow" class for all those block drop shadows.  You can either copy it into the appropriate place in the sheet, or you can add the class "shadow" via the block admin -> block class thingy.  There's also a "shoutbox" class that I whipped up, though it's a SASS mixin in the "lib.sass" file.  If you don't want to get involved with SASS, just copy it out into your sheet for the relevant div and presto.  The last item in the MegaMenu needs to be done, but the spec on that item kept changing so much I kept putting it off.

Community section needs to be done, there's lots of minor theming that needs to be that has been done in other parts of the site, so I anticipate it coming together quickly.

IE has not been addressed at all, BE WARNED.  This is probably the biggest thing still looming, as the border radiuses (which Noah has said he's not too worried about), but mainly the drop shadows are currently all done with CSS.  As this is a seriously repeating element through out the site, this'll need to be addressed with some MFing png drop shadows.

***

Update from Rian 4/19/2012
John, I had to append pagers to a couple of the newer team member blocks. I don't have coffeescript installed, so I just added the extra selectors into both files (around line 17 for scripts.coffee / around line 23 for scripts.js).

Also, megan and I both have our own css files (megan.css and rian.css), which we've included in the preprocess-page.inc file. Once you're back, I assume you can just merge these into their proper places.


Update from Megan 4/20/2012

We added some CSS to cover basic text styles like paragraphs, headings, lists, etc. I had to put these in global.css so they wouldn't get overridden by the reset in one of the fieldglass-alpha CSS files.

For both Industry Recognition pages and the contact form I have forced the #region-content div to 100% width. I think with Omega/Delta it would be better to create a new Delta for full width pages (no sidebars) rather than forcing it with CSS. There may be other pages that need this anyway. I have a foggy idea of how to do this, but maybe you're ahead of me on this? If you need me to I can take a stab at this later.

There are a lot of blocks with individually styled headers (see first CSS block in resources.css), and that dotted bottom border that should probably be merged with the original definition for those elements.

John - 4/26.

has it really only been a week?  Anyway, thanks for putting up with my esoteric toolset.  I like playing with new toys.  SASS in particular has really upped my output, CoffeeScript less so.

I might merge this stuff back in, but it doesn't really matter since Drupal aggregates it all for us anyway.

Back to work.