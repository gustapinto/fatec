from fatec.fatec.disciplina import Disciplina


class Curso:
    def __init__(self,  nome_curso='', coordenador=''):
        self._nome_curso = nome_curso
        self._coordenador = coordenador
        self._disciplinas = []

    @property
    def curso(self):
        return self._nome_curso

    @curso.setter
    def curso(self, valor):
        self._nome_curso = valor

    @property
    def coordenador(self):
        return self._coordenador

    @coordenador.setter
    def coordenador(self, valor):
        self._coordenador = valor

    @property
    def disciplinas(self):
        return self._disciplinas

    def add_disciplina(self, disciplina, ementa=''):
        disciplina = Disciplina(disciplina=disciplina, ementa=ementa)

        self.disciplinas.append(disciplina)

    def __str__(self):
        return 'Curso: ' + self.curso

    def __repr__(self):
        return str(self)
