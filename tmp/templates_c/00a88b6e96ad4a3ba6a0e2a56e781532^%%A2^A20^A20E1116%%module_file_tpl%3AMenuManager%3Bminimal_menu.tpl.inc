<?php /* Smarty version 2.6.26, created on 2012-04-11 06:34:24
         compiled from module_file_tpl:MenuManager%3Bminimal_menu.tpl */

$this->_cache_serials['D:\wamp\www\cms\tmp\templates_c\00a88b6e96ad4a3ba6a0e2a56e781532^%%A2^A20^A20E1116%%module_file_tpl%3AMenuManager%3Bminimal_menu.tpl.inc'] = '612c40fb1c7b639e0a8b4b50e57c81bb';

?><?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('function', 'repeat', 'module_file_tpl:MenuManager;minimal_menu.tpl', 9, false),)), $this); ?>
<?php
function _smarty_tplfunc_612c40fb1c7b639e0a8b4b50e57c81bb_0(&$_smarty)
{
$_cache_attrs =& $_smarty->_smarty_cache_attrs('612c40fb1c7b639e0a8b4b50e57c81bb','0');echo smarty_cms_function_repeat(array('string' => "<ul>",'times' => $_smarty->_tpl_vars['node']->depth-$_smarty->_tpl_vars['node']->prevdepth), $_smarty);
}


function _smarty_tplfunc_612c40fb1c7b639e0a8b4b50e57c81bb_1(&$_smarty)
{
$_cache_attrs =& $_smarty->_smarty_cache_attrs('612c40fb1c7b639e0a8b4b50e57c81bb','1');echo smarty_cms_function_repeat(array('string' => "</li></ul>",'times' => $_smarty->_tpl_vars['node']->prevdepth-$_smarty->_tpl_vars['node']->depth), $_smarty);
}


function _smarty_tplfunc_612c40fb1c7b639e0a8b4b50e57c81bb_2(&$_smarty)
{
$_cache_attrs =& $_smarty->_smarty_cache_attrs('612c40fb1c7b639e0a8b4b50e57c81bb','2');echo smarty_cms_function_repeat(array('string' => "</li></ul>",'times' => $_smarty->_tpl_vars['node']->depth-1), $_smarty);
}



?>
