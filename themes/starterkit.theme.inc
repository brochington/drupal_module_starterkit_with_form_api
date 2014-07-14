<?php

/*
This file is where you do processing and creation of variables that will be used by
the starterkit.tpl.php template file. 
*/


function starterkit_preprocess(&$variables, $hook) {

};

function template_preprocess_starterkit(&$variables) {

	$variables['test_var'] = 'this is a test variable, and can be reached on the template.';
}