use empresa;

-- estrutura case
select c.id, c.nome, case
    when c.tipo = 'f' then 'Pessoa fisica'
    when c.tipo = 'j' then 'Pessoa juridica'
    else ' '
end as tipo
from cliente c
