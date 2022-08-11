<?php

if (! empty($_GET)) {
    echo $_GET['texto'];
    die;
}

if (! empty($_POST)) {
    echo $_POST['input'];
    die;
}

