<?php

// In PHP you can declare a function without type hint
function scream($text)
{
    return strtoupper($text);
}

// Or type hinting the parameters and return
function whisper(string $text): string
{
    return strtolower($text);
}

echo scream('Screaming!') . '<br>';
echo whisper('Also screaming, but on a lower tone!') . '<br>';

// The function parameters can also be passed as a reference using &...
function appendString(string &$text, string $appendText): void
{
    $text .= $appendText;
}

$bar = 'Bar';

echo $bar . '<br>';

appendString($bar, 'Foo, whait that is illegal');

echo $bar . '<br>';

// Lambda functions are also allowed! They are mostly used as a easy way
// to create callbacks
$pow = function(int $number) {
    return $number * $number;
};

echo $pow(4). '<br>';

