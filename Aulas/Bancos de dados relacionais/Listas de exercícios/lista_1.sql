use empresa;

create table if not exists movimentacao (
    id bigint auto_increment,
    datamovimento date not null,
    idproduto int not null,
    quantidade int not null,
    precounitario decimal(10, 2) not null,
    tipomovimento char(1) not null, -- E, S ou A
    numdocto int not null,

    constraint primary key (id),
    constraint foreign key (idproduto) references produto (id)
);

delimiter //

create or replace trigger trg_item_after_insert
    after insert on item for each row
    begin
        insert into movimentacao (
                datamovimento,
                idproduto,
                quantidade,
                precounitario,
                tipomovimento,
                numdocto
            )
            values (
                current_date(),
                new.idproduto,
                new.quantidade,
                new.precounitario,
                "S",
                99
            );
    end //

create or replace trigger trg_item_after_delete
    after delete on item for each row
    begin
        insert into movimentacao (
                datamovimento,
                idproduto,
                quantidade,
                precounitario,
                tipomovimento,
                numdocto
            )
            values (
                current_date(),
                old.idproduto,
                old.quantidade,
                old.precounitario,
                "E",
                99
            );

        update produto set estoque = estoque + old.quantidade
            where id = old.idproduto;
    end //

create or replace trigger trg_item_after_update
    after update on item for each row
    begin
        insert into movimentacao (
                datamovimento,
                idproduto,
                quantidade,
                precounitario,
                tipomovimento,
                numdocto
            )
            values (
                current_date(),
                new.idproduto,
                new.quantidade,
                new.precounitario,
                "A",
                99
            );

        if old.quantidade <> new.quantidade then
            set @diferenca = new.quantidade - old.quantidade;

            update produto set estoque = estoque - @diferenca
                where id = new.idproduto;
        end if;
    end //

create or replace trigger trg_empregado_after_update
    before update on empregado for each row
    begin
        if old.cargo <> new.cargo then
            set @novo_salario = (select c.salario from cargo c
                where c.descricao = new.cargo);

            set new.salario = @novo_salario;
        end if;
    end //

delimiter ;
