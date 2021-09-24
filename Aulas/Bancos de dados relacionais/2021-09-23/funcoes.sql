delimiter //

-- Inicializa uma funcao
create or replace function oi(nome varchar(20))
    returns varchar(50) -- Define o tipo do valor retornado
    begin  -- Inicia corpo da funcao
        declare texto varchar(50);  -- Declara uma variavel auxiliar

        set texto = concat("Oi ", nome);

        if curtime() > "18:00:00" then
            set texto = concat(texto, ", Boa noite");
        else
            set texto = concat(texto, ", Bom dia");
        end if;

        return texto;  -- Retorna um valor
    end //

delimiter ;

-- Chama a funcao
select oi("Foo Bar");
