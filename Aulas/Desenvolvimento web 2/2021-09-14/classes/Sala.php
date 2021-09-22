<?php

abstract class Sala
{
    protected array $pessoas;
    protected int $qtdePessoas;

    abstract function fechaSala();

    protected function abreSala(array $pessoas = [])
    {
        $this->pessoas = $pessoas;
        $this->qtdePessoas = count($pessoas);
    }

    protected function descrevePessoasNaSala(): void
    {
        foreach ($this->pessoas as $pessoa) {
            $pessoa->descreve();
            $pessoa->fala();
        }
    }
}
