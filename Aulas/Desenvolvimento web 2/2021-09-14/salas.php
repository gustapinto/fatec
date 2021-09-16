<?php

require_once('./pessoas.php');
require_once('./SalaVirtual.php');

$teams = new SalaVirtual([$foo, $bar], 'Teams');
$meet = new SalaVirtual([$foobar, $barfoo, $farboo], 'Meet');

$teams->exibeParticipantes();
$meet->exibeParticipantes();
