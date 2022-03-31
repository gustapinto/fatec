import pytest
from fatec.Fatec import Fatec
from fatec.fatec.curso import Curso
from fatec.fatec.disciplina import Disciplina


class TestAgencia:
    def test_instanciar_objeto(self):
        objeto = Fatec('Araras')
        assert objeto.cidade, 'Araras'
        assert objeto.cursos == []

    def test_str_repr(self):
        objeto = Fatec('Araras')
        msg = 'Fatec Araras'
        assert str(objeto) == msg
        assert repr(objeto) == msg

    def test_properties(self):
        objeto = Fatec('Araras')
        objeto.cidade = 'Araras'

    def test_properties2(self):
        objeto = Fatec('Araras')
        assert objeto.cursos == []

    def test_metodo_add_curso(self):
        objeto = Fatec('Araras')
        assert len(objeto.cursos) == 0
        objeto.add_curso('DSM', 'Nilton')
        assert type(objeto.cursos[0]) == Curso
        assert len(objeto.cursos) == 1

    def test_metodo_add_curso_2(self):
        objeto = Fatec('Araras')
        assert len(objeto.cursos) == 0
        objeto.add_curso('DSM', 'Nilton')
        objeto.add_curso('GE', 'Zenaide')
        assert type(objeto.cursos[0]) == Curso
        assert type(objeto.cursos[1]) == Curso
        assert len(objeto.cursos) == 2

    def test_metodo_add_curso_3(self):
        ''' Verifica se o nome do curso torna-se maiúsculas '''
        objeto = Fatec('Araras')
        assert len(objeto.cursos) == 0
        objeto.add_curso('dsm', 'Nilton')
        objeto.add_curso('GE', 'Zenaide')
        assert len(objeto.cursos) == 2
        objeto.cursos[0].curso == 'DSM'
        objeto.cursos[1].curso == 'GE'

    def test_metodo_add_curso_4(self):
        msg = 'Nome do curso precisa ser string'
        with pytest.raises(TypeError) as error:
            objeto = Fatec('Araras')
            objeto.add_curso(['dsm'], 'Nilton')
        assert str(error.value) == msg

    def test_metodo_add_disciplina(self):
        fatec_araras = Fatec('Araras')
        fatec_araras.add_curso('dsm', 'Nilton')
        fatec_araras.add_disciplina('dsm', 'Algoritmo','Sequencia, seleção, iteração')
        assert type(fatec_araras.cursos[0].disciplinas) == list
        assert type(fatec_araras.cursos[0].disciplinas[0]) == Disciplina

    def test_metodo_add_disciplina_2(self):
        fatec_araras = Fatec('Araras')
        fatec_araras.add_curso('dsm', 'Nilton')
        fatec_araras.add_disciplina('dsm', 'Algoritmo','Sequencia, seleção, iteração')
        disciplina_cadastrada = fatec_araras.cursos[0].disciplinas[0]
        assert disciplina_cadastrada.disciplina == 'Algoritmo'
        assert disciplina_cadastrada.ementa == 'Sequencia, seleção, iteração'
