use empresa;

-- Define um novo trigger, seguindo a sintaxe do Maria DB
create or replace trigger trg_item_insert
    after insert on item for each row
        update produto
            -- Usa new. para acessar os novos dados, vindos do insert
            set estoque = estoque - new.quantidade
            where id = new.idproduto;

insert into item values (10, 6, 5, 10);

select * from produto p;
