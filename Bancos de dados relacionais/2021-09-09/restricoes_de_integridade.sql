create database if not exists foobar;

use foobar;

drop table pai;

drop table filha;

create table if not exists pai (
    -- Usa restricao de dominio ao definir os tipos dos atributos
    -- Usa not null para garantir integridade de vazio dos campos
    id integer not null,
    nome varchar(60) not null,
    celular varchar(15),
    cpf varchar(15) not null,

    -- Usa constraint para implementar a integridade referencial da primary key
    constraint primary key(id),
    -- Define o cpf como chave unica para evitar duplicidade de pessoas
    constraint unique(cpf)
);

insert into pai values (1, 'Cleito', '9999-9999', '999.999.999-99');

-- Vai gerar erro de duplicidade com o cpf
insert into pai values (2, 'Cleito v.2', '9999-9999', '999.999.999-99');

create table if not exists filha(
    id integer not null auto_increment,
    pai_id integer not null,
    nome varchar(60) not null,
    celular varchar(15),
    cpf varchar(15) not null,

    constraint primary key(id),
    -- Define a relação entre filha e pai
    constraint foreign key (pai_id) references pai(id)
        -- Configura para apagar filha ao apagar o pai
        on delete cascade
);

insert into filha values (null, 1, 'Cátia', null, '999.999.999-99');

-- Vai estourar erro de referencia por conta do pai não existir
insert into filha values (null, 1231231, 'Cátia', null, '111.111.111-11');
