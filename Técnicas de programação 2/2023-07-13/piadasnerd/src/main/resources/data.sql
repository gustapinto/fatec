create table if not exists piadas (
    id int primary key auto_increment,
    descricao varchar(255) not null,
    resposta varchar(255),
    possui_resposta boolean
);

insert into piadas (descricao, resposta, possui_resposta) values
('O que o C++ disse para o C?', 'Você não tem classe!', true),
('O que o C:/DarthVader disse para C:/DarthVader/Luke?', 'Luke, I am your folder!', true),
('Sarah Connor e T-1000 viajam no tempo para evitar o Apocalipse. - Agora que chegamos á base da Skynet, como sabotamos o mainframe?', 'Instala Vista, baby!', true);