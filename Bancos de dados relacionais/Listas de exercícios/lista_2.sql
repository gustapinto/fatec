use empresa;

-- 1.a
create or replace view v_clientes_representante
    as select r.id as id_representante,
            r.nome as nome_representante,
            c.*
        from representante r
        join cliente c on c.idrepresentante = r.id
        order by r.id asc;
        
select * from v_clientes_representante;

-- 1. b
create or replace view v_quantidade_produtos
    as select p.id as id,
            p.descricao as produto,
            sum(i.quantidade) as quantidade_vendida
        from item i
        join produto p on p.id = i.idproduto
        group by p.id;
    
select * from v_quantidade_produtos;

-- 1. c
create or replace view v_produtos_mais_vendidos
    as select p.id as id,
            p.descricao as produto,
            sum(i.quantidade) as quantidade_vendida
        from item i
        join produto p on p.id = i.idproduto
        group by p.id
        order by quantidade_vendida desc
        limit 3;
    
select * from v_produtos_mais_vendidos;


-- 2
create or replace index kproduto on item (idproduto);


-- 3
create or replace user 'foo'@'localhost' identified by 'foobar';

-- 3. a
grant select on empresa.cliente to 'foo'@'localhost';

-- 3. b
grant insert, update, delete on empresa.pedido to 'foo'@'localhost';


-- 4
revoke delete on empresa.pedido from 'foo'@'localhost';


-- 5
describe cliente;
select * from cliente c where estado = 'SP';


-- 6
delimiter //

create or replace procedure obtem_clientes_sp()
    begin
        declare fim int default false;
        declare txt_nome varchar(60);
        declare txt_endereco varchar(60);

        declare resultado cursor for
            select c.nome,
                c.estado
            from cliente c
            where c.estado = "SP";

        declare continue handler for not found set fim = true;

        create temporary table temp_clientes_sp(
            nome varchar(60),
            esatdo varchar(60)
        );

        open resultado;

        read_loop:loop
            fetch resultado into txt_nome, txt_endereco;

            insert into temp_clientes_sp values(txt_nome, txt_endereco);

            if fim then
                leave read_loop;
            end if;
        end loop;

        close resultado;

    select * from temp_clientes_sp;

    drop temporary table temp_clientes_sp;
    end //

delimiter ;

call obtem_clientes_sp();


-- 7
Em uma junção (join) a coluna da tabela base deve ficar a direita da operação, por conta da forma como o otimizador do SQL trabalha, acelerando as operações e queries quando essa regra é seguida, otimizando a obtenção de tabelas filhas através da tabela pai

