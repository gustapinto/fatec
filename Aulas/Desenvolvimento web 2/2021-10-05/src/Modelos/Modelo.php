<?php

abstract class Modelo
{
    protected PDO $pdo;

    protected string $tabela;

    public function __construct()
    {
        $host = 'fatec_mariadb';
        $porta = 3306;
        $bancoDeDados = 'desenvolvimento_web';

        $dsn = 'mysql:host=' . $host. ';port='. $porta . ';dbname=' . $bancoDeDados;

        $usuario = 'root';
        $senha = 'example';

        $this->pdo = new PDO($dsn, $usuario, $senha);
    }

    public function cria(array $dados): void
    {
        $colunas = implode(', ', array_keys($dados));
        $valores = implode("','", array_values($dados));

        $this->pdo->exec("
            INSERT INTO `{$this->tabela}` (${colunas}) VALUES ('${valores}')
        ");
    }
}
