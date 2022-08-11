from fatec.fatec.disciplina import Disciplina
import pytest


class TestDisciplina:
    def test_instancias(self):
        dicionario = dict(disciplina='Estrutura de Dados', ementa='')
        objeto = Disciplina(**dicionario)
        assert isinstance(objeto, Disciplina)

    def test_str_repr(self):
        dicionario = dict(disciplina='Estrutura de Dados', professor='Saraiva')
        objeto = Disciplina(**dicionario)
        msg = 'Estrutura de Dados'
        assert str(objeto) == msg
        assert repr(objeto) == msg
    
    def test_instanciar_objeto_somente_nome(self):
        with pytest.raises(ValueError) as error:
            dicionario = dict(professor='Saraiva')
            objeto = Disciplina(**dicionario)
        assert str(error.value) == 'Disciplina não informada'

    def test_properties(self):
        dicionario = dict(disciplina='Estrutura de Dados', professor='Saraiva')
        objeto = Disciplina(**dicionario)
        msg = 'Algoritmo'
        objeto.disciplina = msg
        assert objeto.disciplina == msg

    def test_properties2(self):
        dicionario = dict(disciplina='Estrutura de Dados', professor='Saraiva')
        objeto = Disciplina(**dicionario)
        msg = 'Ementa do curso'
        objeto.ementa = msg
        assert objeto.ementa == msg