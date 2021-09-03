use empresa;

-- selecione todas as informações do último pedido
-- e o nome do cliente que o fez
select p.*, c.nome from pedido p
    join cliente c on c.id = p.idcliente
    where p.id = (select max(p2.id) from pedido p2);

-- selecione as datas de emissao que sejam menores
-- que a maior data registrada
select p.* from pedido p
    where datemissao < (select max(p2.datemissao) from pedido p2);

-- selecione a venda mais antiga com os dados do cliente
select p.*, c.id, c.nome, c.municipio from pedido p
    join cliente c on c.id = p.idcliente
    where p.id = (select min(p2.id) from pedido p2);
