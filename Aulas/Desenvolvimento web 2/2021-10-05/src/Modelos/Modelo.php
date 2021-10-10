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

    public function obtem(string|null $where = null): array
    {
        $where = is_null($where) ? '' : ("WHERE " . $where);

        $resultados = $this->pdo->query("
            SELECT * FROM `{$this->tabela}` {$where};
        ")->fetchAll();

        return $resultados;
    }

    public function atualiza(array $dados, string|null $where = null): void
    {
        $valores = [];

        foreach ($dados as $coluna => $valor) {
            $valores[] = "${coluna}='${valor}'";
        }

        $sqlValores = implode("','", $valores);

        $sqlWhere = is_null($where) ? '' : "WHERE ${where}";

        $this->pdo->exec("
            UPDATE `{$this->tabela}` SET ${sqlValores} ${sqlWhere}
        ");
    }

    public function atualizaPorId(array $dados, int $id): void
    {
        $this->atualiza($dados, 'id = ' . $id);
    }
}
