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
select valor from cliente c
    order by (select sum(i.quantidade * i.precounitario)
        from pedido p
        join item i on i.idpedido = p.id
        where p.idcliente = c.id) desc
    limit 1;

-- Exercicio 5
select * from formapagto f
    where not exists (select p.idformapagto from pedido p where p.idformapagto = f.id);

-- Exercicio 6
select *, count(c.id) as qtde_compras from produto p
    join item i on i.idproduto = p.id
    join pedido p2 on i.idpedido = p2.id
    join cliente c on p2.idcliente = c.id
    group by p.id;

-- Exericico 7
delimiter //

create or replace trigger trg_item_insert
   after insert on item
    for each row begin
      update produto
         set estoque = estoque - new.quantidade
         where id = new.idproduto;
   end //

select datediff((p.datentrega, p.datemissao) from pedido p where p.idformapagto = 2;

select * from formapagto;


