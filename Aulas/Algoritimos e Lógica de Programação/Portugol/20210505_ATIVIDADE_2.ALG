Algoritmo "20210505_ATIVIDADE_2"

Var
   idade_funcionario : inteiro
   tempo_servico_funcionario : inteiro
   qtde_filhos_funcionario : inteiro
   bonus_idade : inteiro
   bonus_tempo_servico : inteiro
   bonus_qtde_filhos : inteiro
   bonus_total : inteiro

Inicio
   escreva("Insira a idade do funcionario ")
   leia(idade_funcionario)

   escreva("Insira o tempo de serviço do funcionario ")
   leia(tempo_servico_funcionario)

   escreva("Insira o numero de filhos do funcionario ")
   leia(qtde_filhos_funcionario)

   bonus_idade := 0
   bonus_tempo_servico := 0
   bonus_qtde_filhos := 0

   se (idade_funcionario > 45) entao
      bonus_idade := 5 * (idade_funcionario - 45)
   fimse

   se (tempo_servico_funcionario > 10) entao
      bonus_tempo_servico := ((tempo_servico_funcionario - 10) * 20) + 100
   senao
      bonus_tempo_servico := tempo_servico_funcionario * 10
   fimse

   se (qtde_filhos_funcionario >= 3) entao
      bonus_qtde_filhos := 75
   senao
      bonus_qtde_filhos := qtde_filhos_funcionario * 25
   fimse

   bonus_total := bonus_idade + bonus_tempo_servico + bonus_qtde_filhos

   escreval("O bonus para esse funcionario é de R$", bonus_total)
Fimalgoritmo
