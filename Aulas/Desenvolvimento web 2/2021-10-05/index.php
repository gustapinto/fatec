<?php

$uri = str_replace('/2021-10-05/', '', $_SERVER['REQUEST_URI']) . '/';

header('Location: Views/index.php');
