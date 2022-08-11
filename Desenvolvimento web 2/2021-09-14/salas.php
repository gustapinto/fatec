<?php

require_once('pessoas.php');
require_once('classes/SalaVirtual.php');

$teams = new SalaVirtual([$foo, $bar], 'Teams');
$meet = new SalaVirtual([$foobar, $barfoo, $farboo], 'Meet');

$teams->exibeParticipantes();
$meet->exibeParticipantes();

$meet->fechaSala();
$teams->fechaSala();
