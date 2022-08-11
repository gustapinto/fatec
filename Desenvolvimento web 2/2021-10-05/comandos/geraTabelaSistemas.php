<?php

$repositorio = new SistemasRepositorio();

$sistemas =  $repositorio->obtemSistemasOrdenadosPorAcessos();

foreach ($sistemas as $sistema) {
    echo "
        <tr>
            <td>
                {$sistema['sistema']}
            </td>
            <td>
                <a href='{$sistema['link_original']}'>
                    {$sistema['link_original']}
                </a>
            </td>
            <td>
                <a href='http://{$sistema['link_encurtado']}'>
                    {$sistema['link_encurtado']}
                </a>
            </td>
            <td>
                {$sistema['acessos']}
            </td>
        </tr>
    ";
}
