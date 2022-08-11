from fatec.fatec.curso import Curso
from fatec.fatec.disciplina import Disciplina
import pytest


class TestDisciplina:
    def test_instancias(self):
        objeto = Curso('DSM', 'Nilton')
        assert isinstance(objeto, Curso)

    def test_str_repr(self):
        objeto = Curso('DSM', 'Nilton')
        msg = 'Curso: DSM'
        assert str(objeto) == msg
        assert repr(objeto) == msg
    
    def test_properties(self):
        objeto = Curso('DSM', 'Nilton')
        msg = 'GE'
        objeto.curso = msg
        assert objeto.curso == msg

    def test_properties2(self):
        objeto = Curso('DSM', 'Nilton')
        msg = 'Zenaide'
        objeto.coordenador = msg
        assert objeto.coordenador == msg

    def test_properties3(self):
        objeto = Curso('DSM', 'Nilton')
        assert objeto.disciplinas == []

    def test_method_add_disciplina(self):
        objeto = Curso('DSM', 'Nilton')
        assert len(objeto.disciplinas) == 0
        objeto.add_disciplina('Estrutura de Dados', 'fila, pilha, lista')
        assert len(objeto.disciplinas) == 1
        assert type(objeto.disciplinas[0]) == Disciplina
        assert objeto.disciplinas[0].disciplina == 'Estrutura de Dados'

    def test_method_add_disciplina2(self):
        objeto = Curso('DSM', 'Nilton')
        assert len(objeto.disciplinas) == 0
        objeto.add_disciplina('Estrutura de Dados')
        assert len(objeto.disciplinas) == 1
        assert type(objeto.disciplinas[0].ementa) == str
        assert objeto.disciplinas[0].ementa == ''
