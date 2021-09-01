<?php

// Implementa cookies serializados
setcookie('foo', 'bar');  // Retorna um booleano indicando sucesso

// Implementa cookies nao serializados
setrawcookie('foobar', 'barfoo');

// Podemos obter os cookies em uma requisição utilizando a superglobal $_COOKIE
print_r($_COOKIE);
