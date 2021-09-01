<?php

session_start();

if (! isset($_SESSION["loggedin"]) || ! $_SESSION["loggedin"]) {
    header("location: ../views/login.php");
    die;
}
