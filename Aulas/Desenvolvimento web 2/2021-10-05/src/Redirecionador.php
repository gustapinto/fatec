<?php

require_once('Repositorios/SistemasRepositorio.php');

class Redirecionador
{
    public static function redireciona(string $pagina): void
    {
        header('Location: ' . $pagina);
    }

    public static function view(string $view): void
    {
        self::redireciona('/2021-10-05/src/Views/' . $view);
    }

    public static function link(string $uri): void
    {
        $repositorio = new SistemasRepositorio();

        $sistema = $repositorio->obtemSistemaPorLinkEncurtado($uri);

        if ($sistema === null) {
            self::view('erro.php');
        }

        $repositorio->incrementaAcessos($sistema);

        self::redireciona($sistema['link_original']);
    }
}
