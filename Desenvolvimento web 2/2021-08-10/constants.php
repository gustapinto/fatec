<?php

// Structured PHP use the define syntax to define constants
define('CONSTANT', 'The structured constant');

echo CONSTANT . '<br>';

// OOP PHP use the const keyword to define class constants
class FooClass
{
    const CLASS_CONSTANT = 'The class constant';
}

// And they are accessed using a static style call
echo FooClass::CLASS_CONSTANT . '<br>';
