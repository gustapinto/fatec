create database if not exists desenvolvimento_web;

use desenvolvimento_web;

create table if not exists sistema (
    id int auto_increment,
    sistema varchar(30),
    link_original varchar(512),
    link_encurtado varchar(512),

    constraint primary key (id)
);
