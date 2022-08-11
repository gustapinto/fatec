use empresa;

-- usando exists como correlacionamento entre as entidade
-- obs: esse modo e mais performatico do que o utilizando IN
select p.* from produto p
where exists (select i.idproduto from item i
    where p.id = i.idproduto);

-- exercicio: mostre a quantidade de pedidos por forma
-- de pagamento usando subconsultas
select f.descricao,
    (select count(p.id) from pedido p where p.idformapagto = f.id)
from formapagto f;

-- exercicio: mostre todos os cliente que nao possuem
-- vendas, usando subconsultas
select c.id, c.nome, c.tipo from cliente c
where not exists (select p.idcliente from pedido p
    where p.idcliente = c.id);

-- exercicio: mostre a descricao e o preco de custo de
-- todos os produtos e a media dos precos de venda que
-- estao em items
select p.descricao, p.precodecompra,
    (select avg(i.precounitario * quantidade) from item i
     where i.idproduto = p.id) as media_de_venda
from produto p;
