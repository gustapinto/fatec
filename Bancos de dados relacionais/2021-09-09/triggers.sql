use empresa;

-- altera o delimitador de linha padrão
-- OBS: ESSA BAGAÇA É DEPENDENTE DE CLIENT
delimiter $$

-- define um novo trigger, seguindo a sintaxe do maria db
create or replace trigger trg_item_insert
   after insert on item
    for each row begin
      update produto
         -- usa new. para acessar os novos dados, vindos do insert
         set estoque = estoque - new.quantidade
         where id = new.idproduto;
   end $$

delimiter ;

select * from produto;
