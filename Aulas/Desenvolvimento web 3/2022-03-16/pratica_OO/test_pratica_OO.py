from pratica_OO import Aluno, Professor, SalaAula
from datetime import date
import pytest


class TestAluno:
    def test_instance_declared(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert isinstance(objeto, Aluno)

    def test_property_nome(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert isinstance(objeto.nome, str)
        assert objeto.nome == 'José'

    def test_property_nome_update(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert isinstance(objeto.nome, str)        
        objeto.nome = 'José Carlos'
        assert objeto.nome == 'José Carlos'

    def test_property_sobrenome(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert isinstance(objeto.sobrenome, str)
        assert objeto.sobrenome == 'da silva'

    def test_property_sobrenome_update(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert isinstance(objeto.sobrenome, str)
        objeto.sobrenome = 'Pereira'
        assert objeto.sobrenome == 'Pereira'

    def test_method_str(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert str(objeto) == 'José'

    def test_method_repr(self):
        objeto = Aluno('José', 'da silva', 'DSM')
        assert repr(objeto) == 'José da silva'


class TestProfessor:
    def test_instance_declared(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert isinstance(objeto, Professor)

    def test_property_nome(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert isinstance(objeto.nome, str)
        assert objeto.nome == 'Orlando'

    def test_property_nome_update(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert isinstance(objeto.nome, str)        
        objeto.nome = 'José Carlos'
        assert objeto.nome == 'José Carlos'

    def test_property_disciplina(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert isinstance(objeto.disciplina, list)
        assert objeto.disciplina == []


    def test_method_adicionar_disciplina(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert objeto.disciplina == []
        objeto.adicionar_disciplina('Eng. de Software 1')
        assert objeto.disciplina == ['Eng. de Software 1']
        objeto.adicionar_disciplina('Desenv. Web 2')
        assert objeto.disciplina == ['Eng. de Software 1','Desenv. Web 2']

    def test_method_str(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert str(objeto) == 'Orlando'

    def test_method_repr(self):
        objeto = Professor('Orlando', 'Saraiva')
        assert repr(objeto) == 'Orlando'


class TestSalaAula:
    def test_instance_declared(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert isinstance(objeto, SalaAula)

    def test_instance_type_declared(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert isinstance(objeto._professor, Professor)
        assert isinstance(objeto._alunos, list)

    def test_instance_fail_1(self):
        msg_erro = "Tipo do professor precisa instância de Professor"
        with pytest.raises(TypeError) as error:
            SalaAula('Orlando')
        assert str(error.value) == msg_erro


    def test_property_professor(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert isinstance(objeto.professor, str)
        assert objeto.professor == 'Orlando'

    def test_property_alunos(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert isinstance(objeto.alunos, list)
        assert objeto.alunos == []

    def test_property_alunos2(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert objeto.alunos == []
        assert len(objeto.alunos) == 0
        objeto.adicionar_aluno('José', 'da Silva', 'DSM')
        assert len(objeto.alunos) == 1
        objeto.adicionar_aluno('Maria', 'Joaquina', 'DSM')
        assert len(objeto.alunos) == 2

    def test_method_busca_aluno(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        objeto.adicionar_aluno('aluno1', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno2', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno3', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno4', 'xyz', 'DSM')
        retorno = objeto.busca_aluno('aluno1')
        assert str(retorno) == 'aluno1'
        assert isinstance(retorno, Aluno)
    
    def test_method_busca_aluno_2(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        objeto.adicionar_aluno('aluno1', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno2', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno3', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno4', 'xyz', 'DSM')
        retorno = objeto.busca_aluno('aluno4')
        assert str(retorno) == 'aluno4'
        assert isinstance(retorno, Aluno)

    def test_method_busca_aluno3(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        objeto.adicionar_aluno('aluno1', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno2', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno3', 'xyz', 'DSM')
        objeto.adicionar_aluno('aluno4', 'xyz', 'DSM')
        retorno = objeto.busca_aluno('aluno5')
        assert retorno ==  None

    def test_method_str(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert str(objeto) == 'Sala com prof. Orlando'

    def test_method_repr(self):
        professor = Professor('Orlando', 'Saraiva')
        objeto = SalaAula(professor)
        assert repr(objeto) == 'Sala com prof. Orlando'