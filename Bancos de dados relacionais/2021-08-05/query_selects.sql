use seguradora;

select * from carro;

select nome, email from cliente c where id = 2;

select * from cliente c where id <> 2 order by email;

select * from cliente where nome like 'mar%';

select sum(valor) from apolice;

select count(*) from apolice;

select count(distinct placa) from carro;

-- Count the char quantity on string (spaces included :D)
select nome, char_length(nome) from cliente c;

-- Running select functions without tables
select concat('foo', 'bar');

select now();

-- Using conditionals
select if(char_length(nome) < 10, concat(nome, ' ...'), nome) from cliente;

-- Replacing chars
select replace(marca , 'e', '@') from carro;
