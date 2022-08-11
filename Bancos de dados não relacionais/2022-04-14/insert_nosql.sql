create database if not exists db_nao_relacionais;

use db_nao_relacionais;

create table if not exists `nosql_object` (
    `chave` int(11) not null,
    `objeto` json not null
) engine=innodb default charset=utf8;

insert into `nosql_object` (`chave`, `objeto`) values
    (1, '{\"rg\": \"40.600.133-9\", \"cep\": \"68911-090\", \"cor\": \"preto\", \"cpf\": \"069.128.345-15\", \"mae\": \"Rafaela Alícia\", \"pai\": \"Emanuel Lucas Rafael Cardoso\", \"nome\": \"Benedita Kamilly Cardoso\", \"peso\": 61, \"sexo\": \"Feminino\", \"email\": \"benedita_cardoso@trilhavitoria.com.br\", \"idade\": 77, \"senha\": \"lwHM4CRfCd\", \"signo\": \"Áries\", \"altura\": \"1,68\", \"bairro\": \"Fazendinha\", \"cidade\": \"Macapá\", \"estado\": \"AP\", \"numero\": 201, \"celular\": \"(96) 98644-8483\", \"endereco\": \"Travessa Bela Vista\", \"data_nasc\": \"25/03/1945\", \"telefone_fixo\": \"(96) 2909-1137\", \"tipo_sanguineo\": \"A-\"}'),
    (24, '{\"CEP\": 13456773, \"Nome\": \"Rodnei\", \"Email\": \"obrabo@gmail.com\", \"Gênero\": \"Feminino\", \"Telefone\": 19345600980, \"Endereço\": 670, \"Nascimento\": \"10/05/89\", \"Estado Civil\": \"Casado\"}'),
    (25, '{\"CEP\": 13616410, \"Nome\": \"Cleber\", \"Email\": \"e@mail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19999999999, \"Endereço\": \"Av. Do Repolho, Nº80, Jardim Batista\", \"Nascimento\": \"20/04/2002\", \"Profissão\": \"Auxiliar\", \"Estado Civil\": \"Solteiro\"}'),
    (26, '{\"CEP\": 13616410, \"Nome\": \"Cleiton\", \"Email\": \"clei@ton.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19899889124, \"Endereço\": \"9966 Vance Knolls Suite 673 - Bristol, NJ / 72185\", \"Nascimento\": \"12/03/2021\", \"Profissão\": \"Suporte\"}'),
    (27, '{\"Nome\": \"LUIS\", \"Email\": \"pessoa@yahoo.com\", \"Telefone\": 19988745632, \"Endereço\": \"\"}'),
    (28, '{\"Nome\": \"Epaminondas\", \"Email\": \"etevaldo@hotmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19912365478, \"Profissão\": \"Pizzaziolo\", \"Estado Civil\": \"Solteiro\"}'),
    (29, '{\"CEP\": 13616410, \"Nome\": \"Jp\", \"Email\": \"joaopedrobhz@gmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19997899599, \"Nascimento\": \"19/11/2002\", \"Profissão\": \"Suporte\", \"Estado Civil\": \"Solteiro\"}'),
    (30, '{\"CEP\": 13508392, \"Nome\": \"Josué\", \"Email\": \"josuesilva@gmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 161234566789, \"Endereço\": \"Rua 8 de abril, 78\", \"Nascimento\": \"09/03/1998\", \"Estado Civil\": \"Casado\"}'),
    (31, '{\"Nome\": \"Vitor pereira\", \"Email\": \"oemail@arroba.com\", \"Gênero\": \"Não definido\", \"Telefone\": 19998999898, \"Endereço\": \"Av. Dr. Nelson d\' Ávila 296\"}'),
    (32, '{\"CEP\": 13848989, \"Nome\": \"Roberval\", \"Email\": \"oemail@arroba.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19999945465, \"Endereço\": \"Centro\", \"Nascimento\": \"03/08/1994\", \"Profissão\": \"Carteiro\", \"Estado Civil\": \"Solteiro\"}'),
    (33, '{\"CEP\": 13617754, \"Nome\": \"Felipe\", \"Email\": \"flp044@gmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19997293841, \"Endereço\": \"Rua Dolores, Nº40, Jardim Presidente\", \"Nascimento\": \"20/05/2000\", \"Profissão\": \"DBA\", \"Estado Civil\": \"Casado\"}'),
    (34, '{\"Nome\": \"João\", \"Email\": \"joao@joao.com\", \"Gênero\": \"Masculino\", \"Telefone\": \"19 999999999\", \"Endereço\": \"Rua: 13 de Maio, 745 - centro\", \"Nascimento\": \"11/08/2001\"}'),
    (35, '{\"CEP\": 135749374, \"Nome\": \"Deyverson\", \"Email\": \"deyvershow@gmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": \"11 48006688\", \"Endereço\": \"Av. Francisco Matarazzo\", \"Nascimento\": \"08/05/1991\", \"Profissão\": \"Jogador de futebol\", \"Estado Civil\": \"Casado\"}'),
    (36, '{\"Nome\": \"Leôncio\", \"Email\": \"leticia@gmail.com\", \"Gênero\": \"Feminino\", \"Endereço\": \"Av. Do Repolho, Nº80, Jardim Batista\"}'),
    (37, '{\"Nome\": \"Dolores\", \"Telefone\": 1995556332, \"Estado Civil\": \"Solteiro\"}'),
    (38, '{\"Nome\": \"Girafales\", \"Gênero\": \"Masculino\", \"Telefone\": 1966574125, \"Endereço\": \"Rua Batatinhas\"}'),
    (39, '{\"Nome\": \"Amanda\", \"Email\": \"amanda@gmail.com\", \"Gênero\": \"Feminino\", \"Endereço\": \"Rua do Alface Verde, 229\", \"Estado Civil\": \"Solteiro\"}'),
    (40, '{\"Nome\": \"Vitor\", \"Email\": \"email@email.com\", \"Gênero\": \"Masculino\", \"Telefone\": \"19 963258741\", \"Endereço\": \"Avenida 29\", \"Nascimento\": \"05/08/1950\", \"Estado Civil\": \"Casado\"}'),
    (41, '{\"CEP\": 13666666, \"Nome\": \"Luiz\", \"Email\": \"luiz@fatec.com\", \"Gênero\": \"Masculino\", \"Telefone\": \"11 9 96562363\", \"Endereço\": \"Rua Tiradentes, 735\", \"Nascimento\": \"02/03/1197\", \"Estado Civil\": \"Solteiro\"}'),
    (42, '{\"Nome\": \"Arnaldo\", \"Gênero\": \"Masculino\", \"Telefone\": 11987654321, \"Endereço\": \"Rua João da Costa, 348\", \"Nascimento\": \"09/12/2000\", \"Profissão\": \"Comentarista\"}'),
    (43, '{\"CEP\": 13245678, \"Nome\": \"José\", \"Email\": \"josé.6@hotmail.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19854567485, \"Endereço\": \"Pq. das Arvores\", \"Nascimento\": \"01/09/03\", \"Profissão\": \"Caçador de casados\"}'),
    (44, '{\"CEP\": 1361798, \"Nome\": \"Carlos\", \"Email\": \"carlos@carlos.com\", \"Gênero\": \"Masculino\", \"Telefone\": 19967897645, \"Endereço\": \"Centrão\", \"Nascimento\": \"01/01/1978\", \"Profissão\": \"Casado\"}'),
    (45, '{\"Nome\": \"Pedro\", \"Email\": \"pedro@pedro.com\", \"Gênero\": \"Masculino\", \"Telefone\": \"19 123456789\", \"Endereço\": \"Av: Da Saudade, 60, Centro\", \"Profissão\": \"Pedreiro\", \"Estado Civil\": \"Casado\"}');


select json_extract(`objeto`, "$.email") as email
from nosql_object;




