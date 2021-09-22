use empresa;

create table if not exists movimentacao (
    id bigint auto_increment,
    datamovimento date not null,
    idproduto int not null,
    quantidade int not null,
    precounitario decimal(10, 2) not null,
    tipomovimento char(1) not null, -- E, S ou A
    numdocto int not null,

    primary key (id),
    foreign key (idproduto) references id (produto)
);

delimiter //

create or replace trigger trg_item_after_insert
    after insert on item for each row
    begin
        insert into movimentacao (datamovimento, idproduto, quantidade, precounitario, tipomovimento, numdocto)
            values (current_date(), new.idproduto, new.quantidade, new.precounitario, "S", 99);
    end //

create or replace trigger trg_item_after_delete
    after delete on item for each row
    begin
        set @novo_estoque = estoque + old.quantidade;

        update produto set estoque = @novo_estoque where id = old.idproduto;

        insert into movimentacao (datamovimento, idproduto, quantidade, precounitario, tipomovimento, numdocto)
            values (current_date(), old.idproduto, old.quantidade, old.precounitario, "E", 99);
    end //

create or replace trigger trg_item_after_update
    after update on item for each row
    begin
        insert into movimentacao (datamovimento, idproduto, quantidade, precounitario, tipomovimento, numdocto)
            values (current_date(), new.idproduto, new.quantidade, new.precounitario, "A", 99);
    end //

create or replace trigger trg_empregado_after_update
    after update on empregado for each row
    begin
        if old.cargo <> new.cargo then
            set @novo_salario = (select c.salario from cargo c where c.nome = new.cargo);

            update empregado set salario = @novo_salario where id = new.id;
        end if;
    end //

delimiter ;

