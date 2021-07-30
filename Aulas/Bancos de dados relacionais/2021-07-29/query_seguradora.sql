create database if not exists seguradora;

use seguradora;

-- some drops to provide a refresh
drop table if exists apolice, acidente, carro, cliente;

create table if not exists cliente (
    id int not null,
    nome varchar(60) not null,
    email varchar(40) not null,

    -- use constraint to name a primary key
    constraint prk_cliente primary key (id)
);

create table if not exists carro (
    placa varchar(10) not null,
    chassi varchar(20) not null,
    marca varchar(20) not null,
    ano int(4) not null,

    constraint prk_carro primary key (placa)
);

create table if not exists acidente (
    codigo int not null,
    `local` varchar(60) not null,
    `data` date not null,
    hora time not null,
    placa_carro varchar(20) not null,

    constraint prk_acidente primary key (codigo),
    constraint frk_acidente_carro foreign key (placa_carro)
        references carro (placa)
);

create table if not exists apolice (
    codigo int not null,
    valor numeric(10, 2) not null,
    id_cliente int not null,
    placa_carro varchar(20) not null,

    constraint prk_apolice primary key (codigo),
    constraint frk_apolice_carro foreign key (placa_carro)
        references carro (placa),
    constraint frk_apolice_cliente foreign key (id_cliente)
        references cliente (id)
);
