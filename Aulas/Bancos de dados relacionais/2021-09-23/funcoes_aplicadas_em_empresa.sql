use empresa;

delimiter //

create or replace function obtem_maior_salario(cargo varchar(50))
    returns int
    begin
        -- Retorna um select usando (select etc...)
        return (select max(e.salario) from empregado e
            where e.cargo = cargo);
    end //

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

delimiter ;

select obtem_maior_salario("ENGENHEIRO");

select obtem_media_compras(1);  -- Vai retornar um inteiro

select obtem_media_compras(5);  -- Deve retornar NULL, logo 0

select calcula_dias_de_atraso(1);
