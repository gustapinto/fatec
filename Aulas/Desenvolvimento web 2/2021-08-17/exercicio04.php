<?php

$a = 10;
$b = 1;
$c = 40;

if ($a > $b && $a > $c) {
    echo '$a é maior';

    die;
}

if ($b > $a && $b > $c) {
    echo '$b é maior';

    die;
}

if ($c > $a && $c > $b) {
    echo '$c é maior';

    die;
}
