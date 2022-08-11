<?php 
	include('database.php');
	include('default.html');

	if(loggedin()) {
		deleteaccount($_SESSION['username']);
	}
	header("location:login.php");
 ?>
