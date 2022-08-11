use empresa;

-- Exercicio 3
select r.id, r.nome, coalesce((select sum(i.quantidade * i.precounitario)
        from cliente c
        join pedido p on p.idcliente = c.id
        join item i on i.idpedido = p.id
        where c.idrepresentante = r.id
        group by r.id), 0) as valor_vendas
    from representante r;

-- Exercicio 4
select c.* from cliente c
    order by (select sum(i.quantidade * i.precounitario)
        from pedido p
        join item i on i.idpedido = p.id
        where p.idcliente = c.id) desc
    limit 1;

-- Exercicio 5
select * from formapagto f
    where not exists (select p.idformapagto from pedido p where p.idformapagto = f.id);

-- Exercicio 6
select *, (select count(distinct c.id)
        from item i
        join pedido p2 on i.idpedido = p2.id
        join cliente c on p2.idcliente = c.id
        where i.idproduto = p.id) as qtde_clientes_que_compraram
    from produto p;

delimiter //

-- Exericico 7
create or replace trigger trg_item_insert
    after insert on item
    for each row
    begin
        update produto set estoque = estoque - new.quantidade
            where id = new.idproduto;
    end //

-- Exericico 8
create or replace function obtem_parcelas_abertas_para_pedido(pedido_id int)
    returns int
    begin
        declare qtde_parcelas_abertas int;

        set qtde_parcelas_abertas = (select count(pp.id)
            from pedido_parcelas pp
            where pp.IDPEDIDO = pedido_id
            and DATAPAGTO is null);

        return qtde_parcelas_abertas;
    end //

delimiter ;

select obtem_parcelas_abertas_para_pedido(1);

select obtem_parcelas_abertas_para_pedido(2);

select obtem_parcelas_abertas_para_pedido(3);

