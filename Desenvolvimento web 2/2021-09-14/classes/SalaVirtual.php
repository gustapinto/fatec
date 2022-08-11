<?php

require_once('Sala.php');

class SalaVirtual extends Sala
{
    private string $titulo;

    public function __construct(array $pessoas, string $titulo)
    {
        $this->abreSala($pessoas);

        $this->titulo = $titulo;
    }

    public function exibeParticipantes(): void
    {
        print('<h4>Participantes da sala ' . $this->titulo . ': </h4>');

        $this->descrevePessoasNaSala();
    }

    public function fechaSala()
    {
        print('<h4> Fechando a sala ' . $this->titulo . '</h4>');

        foreach ($this->pessoas as $pessoa) {
            print('Até mais ' . $pessoa->nome . '<br>');

            unset($pessoa);
        }

        print($this->titulo . ' fechada as ' . date('H:i:s'));
    }
}
