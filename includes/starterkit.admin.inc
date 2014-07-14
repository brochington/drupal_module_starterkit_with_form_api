<?php 

/**
 * @file
 * Admin include for Starter Kit
 * This is an example of a Form API driven authoring UI
 */

function starterkit_settings_form($form, &$form_state) {

	$form['starterkit_first_fieldset'] = array(
		'#type' => 'fieldset',
		'#title' => t('Starter Kit Sample Fieldset'),
		'#collapsible' => TRUE,
		'#collapsed' => FALSE,
	);

	$form['starterkit_first_fieldset']['starterkit_textfield'] = array(
		'#title' => t('test textfield'),
		'#type' => 'textfield',
		'#default_value' => 'default value',
		'#description' => t('This is a description for the test textfield in Starter Kit.'),
		'#required' => TRUE,
	);

	return system_settings_form($form);
};