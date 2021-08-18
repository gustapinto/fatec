<?php

$array = [
    "n1" => 10,
    "n2" => 20,
    "n3" => 30,
    "n4" => 'oi mundo',
];

echo 'Tipo $array: ' . gettype($array) . '<br>';

print_r($array);

// Ta achando que eu vou subir bug pra produção?
$array['teste'];  // .........sim
