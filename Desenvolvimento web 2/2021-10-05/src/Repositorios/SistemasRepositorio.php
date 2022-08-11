<?php

require_once 'Repositorio.php';
require_once __DIR__ . '/../Modelos/SistemasModelo.php';

class SistemasRepositorio extends Repositorio
{
    public Modelo $modelo;

    public function __construct()
    {
        $this->modelo = new SistemasModelo();
    }

    public function obtemSistemaPorLinkEncurtado(string $linkEncurtado): array|null
    {
        $sistemas = $this->modelo->obtem('link_encurtado LIKE "%' . $linkEncurtado . '"');

        return empty($sistemas) ? null : $sistemas[0];
    }

    public function incrementaAcessos(array $sistema): int
    {
        $acessosIncrementados = $sistema['acessos'] += 1;

        $dados = ['acessos' => $acessosIncrementados];

        $this->modelo->atualizaPorId($dados, $sistema['id']);

        return $acessosIncrementados;
    }

    public function obtemSistemasOrdenadosPorAcessos(): array
    {
        $sistemas = $this->modelo->obtem();

        $colunas = array_column($sistemas, 'acessos');

        array_multisort($colunas, SORT_DESC, $sistemas);

        return $sistemas;
    }
}
