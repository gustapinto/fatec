use empresa;

delimiter //

-- Criando procedures clássicas, sem retorno de valores
create or replace procedure selecionar_produtos(in quantidade int)
    begin
        select * from produto limit quantidade;
    end //

-- Criando procedures com retorno a partir de um parametro passado
-- por referencia
create or replace procedure verifica_quantidade_de_produtos(out quantidade int)
    begin
        select count(*) into quantidade from produto;
    end //

-- Cria uma procedure que recebe e altera algo ao mesmo tempo
create or replace procedure eleva_ao_quadrado(inout numero int)
    begin
        set numero = numero * numero;
    end //

delimiter ;

-- Chama uma procedure classica
call selecionar_produtos(5);

-- Define uma variavel para ser passada por referência na chamada usando @
call verifica_quantidade_de_produtos(@quantidade_de_produtos);
select @quantidade_de_produtos;

-- Chama uma procedure que recebe e retorna valor
set @numero = 5;  -- Define valor inicial
call eleva_ao_quadrado(@numero);
select @numero;

