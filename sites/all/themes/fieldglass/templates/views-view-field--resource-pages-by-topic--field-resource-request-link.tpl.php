<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>

<?php
  if (!isset($row->_field_data['nid']['entity']->field_resource_event_date['und'][0]['value'])) {
    print $output;
    return;
  }
  $bWebinar = false;
  foreach($row->field_field_resource_type_1 as $frt1) {
    if (($frt1['raw']['taxonomy_term']->vid == 2) && ($frt1['raw']['taxonomy_term']->tid == 5)) {
      $bWebinar = true;
    }
  }
  $current_date = time();
  $event_date = strtotime($row->_field_data['nid']['entity']->field_resource_event_date['und'][0]['value']);
  if (($bWebinar == false) || ($current_date > $event_date)) {
    print $output;
    return;
  }
  print '<a href="'. $row->field_field_resource_request_link[0]['raw']['display_url'] .'">Request Event</a>';
?>
