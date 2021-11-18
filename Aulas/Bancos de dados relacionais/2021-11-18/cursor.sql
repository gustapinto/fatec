use empresa;

delimiter /

create or replace procedure sp_cursor()
    begin
        declare fim int default false;
        declare texto_descricao varchar(150);
        declare decimal_estoque decimal(10, 3);
            
        -- Define cursor de select
        declare resultado cursor for 
            select p.descricao, p.estoque from produto p;
        
        -- Cria variavel de controle do loop do cursor
        -- Ela é a responsavel por verificar se o loop chegou ao final
        -- e se chegou altera o valor da variável
        declare continue handler for not found set fim = true;
    
        -- Cria tabela temporária para o cursor operar
        create temporary table temporaria(
            descricao varchar(150),
            estoque decimal(10, 3)
        );
    
        open resultado;  -- Abre cursor
    
        read_loop:loop  -- Define o looping do cursor
            -- Faz a leitura dos linhas do cursor
            fetch resultado into texto_descricao, decimal_estoque;
        
            -- Insere os dados na tabela temporária
            insert into temporaria values(
                texto_descricao,
                decimal_estoque
            );
        
            -- Verifica proximas linhas a serem lidas
            if fim then
                leave read_loop;
            end if;
        end loop;  -- Fecha looping
        
        close resultado; -- Fecha cursor
        
	select * from temporaria;  -- Exibe tabela temporária

	drop temporary table temporaria;  -- Remove tabela temporária
    end //

delimiter ;

call sp_cursor();
