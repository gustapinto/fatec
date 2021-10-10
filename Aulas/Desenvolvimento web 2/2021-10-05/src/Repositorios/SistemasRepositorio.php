<?php

require_once('Repositorio.php');
require_once('src/Modelos/SistemasModelo.php');

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
}
