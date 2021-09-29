create database if not exists desenvolvimento_web;

use desenvolvimento_web;

create table if not exists pessoa (
    id int auto_increment,
    primeiro_nome varchar(60),
    ultimo_nome varchar(30),

    constraint primary key (id)
);
