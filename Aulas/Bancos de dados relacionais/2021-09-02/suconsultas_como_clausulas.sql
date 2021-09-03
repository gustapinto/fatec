use empresa;

-- usando sub consulta como clausula
select p.* from produto p
where p.id in (select i.idproduto from item i);
