<?php

// In PHP a variable is declared using the $ character
$var = 'foo';

echo gettype($var) . ' ';

print_r($var . '<br>');

// And they are weakly typed ...
$var = 321;

echo gettype($var) . ' ';

print_r($var . '<br>');

// Really weakly typed ...
$var = [];

echo gettype($var) . ' ';

print_r($var);
