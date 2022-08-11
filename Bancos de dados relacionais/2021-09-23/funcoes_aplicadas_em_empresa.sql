use empresa;

delimiter //

create or replace function obtem_maior_salario(cargo varchar(50))
    returns int
    begin
        -- Retorna um select usando (select etc...)
        return (select max(e.salario) from empregado e
            where e.cargo = cargo);
    end //

-- Exercício 1
create or replace function obtem_media_compras(cliente_id int)
    returns float
    begin
        declare media_compras float;

        -- Se o cliente nao possuir compras o select abaixo retornara NULL
        set media_compras = (select avg(i.quantidade * i.precounitario)
            from item i join pedido p on p.id = i.idpedido
            where p.idcliente = cliente_id);

        return ifnull(media_compras, 0);
    end //

-- Exercício 2
create or replace function calcula_dias_de_atraso(pedido_id int)
    returns int
    begin
        declare data_pedido date;
        declare dias_em_atraso int;

        set data_pedido = (select p.datemissao from pedido p
            where p.id = pedido_id);

        set dias_em_atraso = datediff(curdate(), data_pedido);

        return dias_em_atraso;
    end //

-- Exercicio 3
create or replace function obtem_clientes_por_representante(representante_id int)
    returns int
    begin
        declare qtde_clientes int;

        set qtde_clientes = (select coalesce(count(c.id), 0) from cliente c
            where c.idrepresentante = representante_id);

        return qtde_clientes;
    end //

-- Exercício
create or replace function obtem_gasto_anual_plano_de_saude()
    returns int
    begin
        declare preco_anual_por_funcionario int default 300 * 12;
        declare qtde_funcionarios int;

        select count(e.id) into qtde_funcionarios from empregado e;

        return preco_anual_por_funcionario * qtde_funcionarios;
    end //

-- Exercício
create or replace function obtem_nome_funcionario_por_id(empregado_id int)
    returns varchar(60)
    begin
        declare nome_funcionario varchar(60);

        select e.nome into nome_funcionario from empregado e
            where e.id = empregado_id;

        return nome_funcionario;
    end //

delimiter ;

select obtem_maior_salario("ENGENHEIRO");

select obtem_media_compras(1);  -- Vai retornar um inteiro

select obtem_media_compras(5);  -- Deve retornar NULL, logo 0

select calcula_dias_de_atraso(1);

select obtem_gasto_anual_plano_de_saude();

select obtem_nome_funcionario_por_id(3);

select obtem_clientes_por_representante(1);

select obtem_clientes_por_representante(10);
