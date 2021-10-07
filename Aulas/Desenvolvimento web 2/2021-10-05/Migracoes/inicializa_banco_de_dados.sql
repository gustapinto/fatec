create database if not exists desenvolvimento_web;

use desenvolvimento_web;

create table if not exists sistema (
    id int auto_increment,
    sistema varchar(30),
    link_original varchar(512) not null,
    link_encurtado varchar(512) not null,
    acessos int not null,

    constraint primary key (id)
);
