<?php

define('NOME_ARQUIVO', 'senhas.txt');
define('SENHA_PREDEFINIDA', '12345678');

$senhaDigitada = (string) $_POST['senha'];

if ($senhaDigitada === '') {
    echo 'Nenhum valor informado para a senha! Tente novamente';
    die;
}

if ($senhaDigitada === SENHA_PREDEFINIDA) {
    echo 'Você acertou a senha!';
    die;
}

echo 'Você errou a senha!';

$arquivo = file_exists(NOME_ARQUIVO)
    ? fopen(NOME_ARQUIVO, 'a')
    : fopen(NOME_ARQUIVO, 'w');

fwrite($arquivo, $senhaDigitada . "\n");
fclose($arquivo);
