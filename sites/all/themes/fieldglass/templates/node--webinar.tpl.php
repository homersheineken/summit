<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>

  <?php if ($teaser && isset($resource_image)): ?>
    <div class="resource_image">
    <?php print $resource_image; ?>
    </div>
  <?php endif;?>

  <?php if ($teaser && $title): ?>
    <?php print render($title_prefix); ?>

    <header>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    </header>

    <?php print render($title_suffix); ?>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>

  <?php if ($content): ?>
    <div<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);

        print render($content);
      ?>
    </div>
  <?php endif; ?>


  <?php if (!$page): ?>
    <div class="links-wrapper clearfix">
      <?php if (!empty($content['links'])): ?>
        <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
      <?php endif; ?>
  
      <?php print render($content['comments']); ?>
    </div>
  <?php endif; ?>
</article>