<?php

class SalaVirtual
{
    public array $participantes;
    public int $qtdeParticipantes;
    public string $titulo;

    public function __construct(
        array $participantes,
        string $titulo,
    ) {
        $this->participantes = $participantes;
        $this->qtdeParticipantes = count($participantes);
        $this->titulo = $titulo;
    }

    public function exibeParticipantes(): void
    {
        print('<h4>Participantes da sala ' . $this->titulo . ': </h4>');

        foreach ($this->participantes as $participante) {
            $participante->descreve();
            $participante->fala();
        }
    }
}
