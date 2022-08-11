use empresa;

-- 1 Mostre todos os Empregados
select * from empregado e;

-- 2 Mostre todos os Empregados que pertençam ao cargo de GERENTE
select * from empregado e where cargo = 'GERENTE';

-- 3 Mostre todos os cargos
select * from cargo c;

-- 4 Mostre o salário referente ao Empregado de código 5
select salario from empregado e where id = 5;

-- 5 Mostre a soma dos salários de todos os Empregados
select sum(salario) from empregado e;

-- 6 Mostre a média salarial dos Empregados
select avg(salario) from empregado e;

-- 7 Mostre o Maior e o Menor salário dos Empregados
select min(salario), max(salario) from empregado e;

-- 8 Mostre a quantidade de Empregados cadastrados
select count(*) from empregado e;

-- 9 Mostre a soma dos salários, agrupados por cargo
select cargo, sum(salario) from empregado e group by cargo;

-- 10 Selecione o nome do cliente e o nome do seu representante
select c.nome as nome_cliente, r.nome as nome_representante
    from cliente c join representante r where c.idrepresentante = r.id;

-- 11 Selecione todas as informações do último pedido
select * from pedido p order by id desc limit 1
