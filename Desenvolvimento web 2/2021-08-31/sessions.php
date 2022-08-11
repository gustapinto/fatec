<?php

// Sessoes sao uma forma de perpetuar dados de forma que esses sejam acessiveis
// em varios acessos do usuario, com as sessoes independendo de cookies
session_start();  // Inicia uma sessao

// Adiciona dados na sessao
$_SESSION['foo'] = 'bar';
$_SESSION['foobar'] = 'barfoo';

// Obtem dados da secao usando a superglobal $_SESSION
print_r($_SESSION);

session_unset();  // Remove todas as variaveis da sessao
session_destroy();  // Destroi a sessao

print_r($_SESSION);
