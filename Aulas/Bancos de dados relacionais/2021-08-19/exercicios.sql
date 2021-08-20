use empresa;

select  p.id, p.datemissao, c.nome, f.descricao 
from pedido p
join cliente c on c.id = p.idcliente
join formapagto f on f.id = p.idformapagto 
where year(datemissao) = 2019;

select
	month(p.datemissao) as mes,
	sum(i.quantidade * i.precounitario) as total
from pedido p 
join item i on i.idpedido = p.id 
where year(p.datemissao) = 2019
group by month(p.datemissao);

select p2.descricao, sum(i.quantidade), p2.precodecompra, p2.precodevenda 
from pedido p
join item i on i.idpedido = p.id
join produto p2 on p2.id = i.idproduto
where year(p.datemissao) = 2019
and month(p.datemissao) = 1
group by p2.precodecompra, p2.precodevenda, p2.descricao;