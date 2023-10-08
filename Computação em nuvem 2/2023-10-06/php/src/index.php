<?php

$host = 'db';
$user = 'db_user';
$pass = 'passw';

$conn = new mysqli($host, $user, $pass);

if ($conn->connect_error) {
    die("Erro: " . $conn->connect_error);
}

echo ("Conectado ao MySQL!");

