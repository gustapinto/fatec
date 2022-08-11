-- Criando um usuário, que independe de bancos de dados
-- específicos
create user 'usuario'@'localhost' identified by 'senha';

-- Esses usuários são salvos em um banco padrão do MySQL,
-- o information_schema
use information_schema;

-- Lista os privilégios atribuidos aos usuários
select * from USER_PRIVILEGES up;

-- Verifica privilégios do usuário recém criado
select * from USER_PRIVILEGES up where GRANTEE like "%'usuario'@%";

-- Garantindo todas as permissões ao usuário, onde
-- *.* garante os privilégios de acesso em qualquer
-- banco de dados e tabela, segundo a sintaxe banco.tabela
grant all privileges on *.* to 'usuario'@'localhost';

-- Revogando permissões de usuário, usando a mesma sintaxe de
-- banco.tabela do GRANT
revoke all privileges on *.* from 'usuario'@'localhost';

-- Garantindo permissões granulares por privilégio e por 
-- banco de dados
grant create, insert, update, delete, select
	on empresa.* to 'usuario'@'localhost';

-- Listar as permissões granulares, que ficam salvas na tabela
-- interna schema_privileges
select * from SCHEMA_PRIVILEGES sp where GRANTEE like "%'usuario'@%";
