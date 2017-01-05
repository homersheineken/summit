<?php
/**
 * @file
 * company_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function company_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'company_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_industry' => 'field_industry',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>.view-company-profile .views-row {
    float: left;
    width: 240px;
    min-height: 450px;
}
.container-12 .grid-9 {
    width: 100%;
}
aside#region-sidebar-first {
    display: none;
}
.views-field-title .field-content {
    font-size: 18px;
    font-weight: bold
}

span.views-label.views-label-field-industry,span.views-label.views-label-field-management-model,span.views-label.views-label-field-maturity, span.views-label.views-label-field-program,span.views-label.views-label-field-region {
    font-weight: bold;
}


</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Attendee Image */
  $handler->display->display_options['fields']['field_attendee_image']['id'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['table'] = 'field_data_field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['field'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['label'] = '';
  $handler->display->display_options['fields']['field_attendee_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attendee_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attendee_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attendee_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = FALSE;
  /* Field: Content: Management Model */
  $handler->display->display_options['fields']['field_management_model']['id'] = 'field_management_model';
  $handler->display->display_options['fields']['field_management_model']['table'] = 'field_data_field_management_model';
  $handler->display->display_options['fields']['field_management_model']['field'] = 'field_management_model';
  $handler->display->display_options['fields']['field_management_model']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_management_model']['element_label_colon'] = FALSE;
  /* Field: Content: Maturity */
  $handler->display->display_options['fields']['field_maturity']['id'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['table'] = 'field_data_field_maturity';
  $handler->display->display_options['fields']['field_maturity']['field'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maturity']['element_label_colon'] = FALSE;
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_program']['id'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['table'] = 'field_data_field_program';
  $handler->display->display_options['fields']['field_program']['field'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_program']['separator'] = '';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_region']['alter']['text'] = '<div class="views-row  [field_industry] [field_management_model]  [field_maturity]   [field_program]  [field_region]">
    <div class="views-field views-field-field-attendee-image">        
        <div class="field-content">
            [field_attendee_image]
        </div>  
    </div>
    <div class="views-field views-field-title">   [title]      </div>
    <div class="views-field views-field-field-industry">    [field_industry] </div>
    <div class="views-field views-field-field-management-model">    [field_management_model]  </div>
    <div class="views-field views-field-field-maturity">    [field_maturity]</div>
    <div class="views-field views-field-field-program">    [field_program] </div>
    <div class="views-field views-field-field-region">    [field_region]  </div>
</div>';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_region']['separator'] = '';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendee' => 'attendee',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3 mix [field_industry]  [field_management_model]  [field_maturity]   [field_program]   [field_region]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="hero">
    <img src="sites/default/files/attendees.jpg" />
    <div class="herotext attendees">Attendees</div>
</div>

<div class="filters"><div class="button-group filter-button-group bg1" data-filter-group="region">
    Region: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".north">North America</button><button class="button" data-filter=".latin">Latin America</button><button class="button" data-filter=".apac">APAC</button><button class="button" data-filter=".emea">EMEA</button>
</div><div class="button-group filter-button-group bg2" data-filter-group="management">
    Management model: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".msp">MSP</button><button class="button" data-filter=".self-managed">Self-managed</button><button class="button" data-filter=".hybrid">Hybrid</button>
</div>
<div class="button-group filter-button-group bg3" data-filter-group="industry">
    Industry:   <button class="button is-checked" class="button" data-filter="">Show all</button><button class="button" class="button" data-filter=".energy-resources-utility">Energy/Resources/Utility</button><button class="button" class="button" data-filter=".finance-insurance">Finanace/Insurance</button><button class="button" class="button" data-filter=".healthcare-pharma-med">Healthcare/Pharma/Med</button><button class="button" class="button" data-filter=".hospitality-leisure-transportation">Hospitality/Leisure/Transportation</button><button class="button" class="button" data-filter=".manufacturing-chemicals">Manufacturing/Chemicals</button><button class="button" class="button" data-filter=".not">Not for Profit/Gov\'t</button><button class="button" class="button" data-filter=".retail-packaging">Retail/Packaging</button><button class="button" class="button" data-filter=".technology-telecom">Technology/Telecom</button>
</div>
<div class="button-group filter-button-group bg4" data-filter-group="programs">
    Program: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".sow">SOW</button><button class="button" data-filter=".contingent">Contingent</button><button class="button" data-filter=".profile">Profile Worker</button>
</div>
<div class="button-group filter-button-group bg5" data-filter-group="maturity">
    Program Age: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".0-2">0-2 years</button><button class="button" data-filter=".3-5">3-5 years</button><button class="button" data-filter=".6-8">6-8 years</button><button class="button" data-filter=".9">9+ years</button><button class="button" data-filter=".implementation">Implementation</button>
</div>
</div>

<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery.isotope/2.2.2/isotope.pkgd.js"></script>
<script>


        /*jQuery(\'.filter-button-group button\').click(  \'button\', function() {
            var filterValue = jQuery( this ).attr(\'data-filter\');
            // use filterFn if matches value
            container.isotope({ filter: filterValue });
        });*/


        jQuery( document ).ready( function() {
            var filters = {};
            var container = jQuery(\'.grid\').isotope({
                // options
                itemSelector: \'.views-row\',
                layoutMode: \'fitRows\'
            });


            jQuery(\'.filter-button-group button\').click( \'button\', function() {
                var $this = jQuery(this);
                // get group key
                var $buttonGroup = $this.parents(\'.button-group\');
                var filterGroup = $buttonGroup.attr(\'data-filter-group\');
                // set filter for group
                filters[ filterGroup ] = $this.attr(\'data-filter\');
                // combine filters
                var filterValue = concatValues( filters );
                container.isotope({ filter: filterValue });
                $buttonGroup.find(\'.is-checked\').removeClass(\'is-checked\');
                jQuery( this ).addClass(\'is-checked\');
            });

            function concatValues( obj ) {
                var value = \'\';
                for ( var prop in obj ) {
                    value += obj[ prop ];
                }
                return value;
            }
        });




</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Attendee Image */
  $handler->display->display_options['fields']['field_attendee_image']['id'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['table'] = 'field_data_field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['field'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['label'] = '';
  $handler->display->display_options['fields']['field_attendee_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attendee_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attendee_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = FALSE;
  /* Field: Content: Management Model */
  $handler->display->display_options['fields']['field_management_model']['id'] = 'field_management_model';
  $handler->display->display_options['fields']['field_management_model']['table'] = 'field_data_field_management_model';
  $handler->display->display_options['fields']['field_management_model']['field'] = 'field_management_model';
  $handler->display->display_options['fields']['field_management_model']['element_label_colon'] = FALSE;
  /* Field: Content: Maturity */
  $handler->display->display_options['fields']['field_maturity']['id'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['table'] = 'field_data_field_maturity';
  $handler->display->display_options['fields']['field_maturity']['field'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['element_label_colon'] = FALSE;
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_program']['id'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['table'] = 'field_data_field_program';
  $handler->display->display_options['fields']['field_program']['field'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['alter']['text'] = '<div class="views-row  [field_industry] [field_management_model]  [field_maturity]   [field_program]  [field_region]">
    <div class="views-field views-field-field-attendee-image">        
        <div class="field-content">
            [field_attendee_image]
        </div>  
    </div>
    <div class="views-field views-field-title">   [title]      </div>
    <div class="views-field views-field-field-industry">    [field_industry] </div>
    <div class="views-field views-field-field-management-model">    [field_management_model]  </div>
    <div class="views-field views-field-field-maturity">    [field_maturity]</div>
    <div class="views-field views-field-field-program">    [field_program] </div>
    <div class="views-field views-field-field-region">    [field_region]  </div>
</div>';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendee' => 'attendee',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'company-profile99';

  /* Display: Page2 */
  $handler = $view->new_display('page', 'Page2', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'stuff grid';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3 mix [field_industry] [field_management_model] [field_maturity] [field_program] [field_region]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="hero">
    <img src="sites/default/files/attendees.jpg" />
    <div class="herotext attendees">Attendees</div>
</div>
<style>
  .title{
     display:none;
}
</style>
<div class="filters"><div class="button-group filter-button-group bg1" data-filter-group="region">
    Region: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".north">North America</button><button class="button" data-filter=".latin">Latin America</button><button class="button" data-filter=".apac">APAC</button><button class="button" data-filter=".emea">EMEA</button>
</div><div class="button-group filter-button-group bg2" data-filter-group="management">
    Management model: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".msp">MSP</button><button class="button" data-filter=".self-managed">Self-managed</button><button class="button" data-filter=".hybrid">Hybrid</button>
</div>

<div class="button-group filter-button-group bg3" data-filter-group="industry">
    Industry:   <button class="button is-checked" class="button" data-filter="">Show all</button><button class="button" class="button" data-filter=".energy-resources-utility">Energy/Resources/Utility</button><button class="button" class="button" data-filter=".finance-insurance">Finanace/Insurance</button><button class="button" class="button" data-filter=".healthcare-pharma-med">Healthcare/Pharma/Med</button><button class="button" class="button" data-filter=".hospitality-leisure-transportation">Hospitality/Leisure/Transportation</button><button class="button" class="button" data-filter=".manufacturing-chemicals">Manufacturing/Chemicals</button><button class="button" class="button" data-filter=".not">Not for Profit/Gov\'t</button><button class="button" class="button" data-filter=".retail-packaging">Retail/Packaging</button><button class="button" class="button" data-filter=".technology-telecom">Technology/Telecom</button>
</div>
<div class="button-group filter-button-group bg4" data-filter-group="programs">
    Program: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".sow">SOW</button><button class="button" data-filter=".contingent">Contingent</button><button class="button" data-filter=".profile">Profile Worker</button>
</div>
<div class="button-group filter-button-group bg5" data-filter-group="maturity">
    Program Age: <button class="button is-checked" data-filter="">Show all</button><button class="button" data-filter=".0-2">0-2 years</button><button class="button" data-filter=".3-5">3-5 years</button><button class="button" data-filter=".6-8">6-8 years</button><button class="button" data-filter=".9">9+ years</button><button class="button" data-filter=".implementation">Implementation</button>
</div>
</div>

<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery.isotope/2.2.2/isotope.pkgd.js"></script>
<script>


        /*jQuery(\'.filter-button-group button\').click(  \'button\', function() {
            var filterValue = jQuery( this ).attr(\'data-filter\');
            // use filterFn if matches value
            container.isotope({ filter: filterValue });
        });*/


        jQuery( document ).ready( function() {
            var filters = {};
            var container = jQuery(\'.grid\').isotope({
                // options
                itemSelector: \'.views-row\',
                layoutMode: \'fitRows\'
            });


            jQuery(\'.filter-button-group button\').click( \'button\', function() {
                var $this = jQuery(this);
                // get group key
                var $buttonGroup = $this.parents(\'.button-group\');
                var filterGroup = $buttonGroup.attr(\'data-filter-group\');
                // set filter for group
                filters[ filterGroup ] = $this.attr(\'data-filter\');
                // combine filters
                var filterValue = concatValues( filters );
                container.isotope({ filter: filterValue });
                $buttonGroup.find(\'.is-checked\').removeClass(\'is-checked\');
                jQuery( this ).addClass(\'is-checked\');
            });

            function concatValues( obj ) {
                var value = \'\';
                for ( var prop in obj ) {
                    value += obj[ prop ];
                }
                return value;
            }
        });




</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Attendee Image */
  $handler->display->display_options['fields']['field_attendee_image']['id'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['table'] = 'field_data_field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['field'] = 'field_attendee_image';
  $handler->display->display_options['fields']['field_attendee_image']['label'] = '';
  $handler->display->display_options['fields']['field_attendee_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attendee_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attendee_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  /* Field: Content: Management Model */
  $handler->display->display_options['fields']['field_management_model']['id'] = 'field_management_model';
  $handler->display->display_options['fields']['field_management_model']['table'] = 'field_data_field_management_model';
  $handler->display->display_options['fields']['field_management_model']['field'] = 'field_management_model';
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_program']['id'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['table'] = 'field_data_field_program';
  $handler->display->display_options['fields']['field_program']['field'] = 'field_program';
  $handler->display->display_options['fields']['field_program']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['alter']['text'] = '<div class="views-row  [field_industry] [field_management_model]  [field_maturity]   [field_program]  [field_region]">
    <div class="views-field views-field-field-attendee-image">        
        <div class="field-content">
            [field_attendee_image]
        </div>  
    </div>
    <div class="views-field views-field-title">   [title]      </div>
    <div class="views-field views-field-field-industry">    [field_industry] </div>
    <div class="views-field views-field-field-management-model">    [field_management_model]  </div>
    <div class="views-field views-field-field-maturity">    [field_maturity]</div>
    <div class="views-field views-field-field-program">    [field_program] </div>
    <div class="views-field views-field-field-region">    [field_region]  </div>
</div>';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: Maturity */
  $handler->display->display_options['fields']['field_maturity']['id'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['table'] = 'field_data_field_maturity';
  $handler->display->display_options['fields']['field_maturity']['field'] = 'field_maturity';
  $handler->display->display_options['fields']['field_maturity']['label'] = 'Program Age';
  $handler->display->display_options['fields']['field_maturity']['alter']['text'] = '<div class="views-row ">
    <div class="views-field views-field-field-attendee-image">        
        <div class="field-content">
            [field_attendee_image]
        </div>  
    </div>
    <div class="views-field views-field-title">   [title]      </div>
    <div class="views-field views-field-field-industry">    [field_industry] </div>
    <div class="views-field views-field-field-management-model">    [field_management_model]  </div>
    <div class="views-field views-field-field-maturity">    [field_maturity]</div>
    <div class="views-field views-field-field-program">    [field_program] </div>
    <div class="views-field views-field-field-region">    [field_region]  </div>
</div>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendee' => 'attendee',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'company-profile';
  $export['company_profile'] = $view;

  return $export;
}
