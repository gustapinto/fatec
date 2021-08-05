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

insert into cliente values(1, 'filadelfo', 'rua atlantica, 54');
insert into cliente values(2, 'marcolino', 'rua guanabara, 275');
insert into cliente values(3, 'jurisprudencio', 'rua 1, 1390');
insert into cliente values(4, 'maria do bairro', 'rua nove de abril, 378');

insert into carro values('plz3267', '98759235n', 'ford', 2015);
insert into carro values('zza9090', 'k03845200', 'chevrolet',2019);
insert into carro values('qwe0110', '90234995j', 'renault', 2012);
insert into carro values('tre8831', '3545h9835', 'jeep', 2020);

insert into apolice values(123, '78000', '1', 'plz3267');
insert into apolice values(124, '96000', '2', 'zza9090');
insert into apolice values(125, '36000', '3', 'qwe0110');
insert into apolice values(126, '87000', '4', 'tre8831');

insert into acidente values(1, 'av. carlos acuti', '2021-05-15', '10:00:00', 'tre8831');
insert into acidente values(2, 'praca da republica', '2021-02-28', '20:30:00', 'plz3267');
