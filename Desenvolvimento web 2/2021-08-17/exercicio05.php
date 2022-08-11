<?php

$a = 10;
$b = 1;
$c = 40;

if ($a > $b && $a > $c) {
    echo '$a é maior';
} elseif ($b > $a && $b >$c) {
    echo '$b é maior';
} else {
    echo '$c émaior';
}
