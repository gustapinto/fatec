from fatec.fatec.curso import Curso


class Fatec:
    def __init__(self, cidade):
        self._cidade = cidade
        self._cursos = []

    @property
    def cidade(self):
        return self._cidade

    @cidade.setter
    def cidade(self, valor):
        self._cidade = valor

    @property
    def cursos(self):
        return self._cursos

    def add_curso(self, nome, coordenador=None):
        if not type(nome) is str:
            raise TypeError('Nome do curso precisa ser string')

        curso = Curso(nome.upper(), coordenador)

        self.cursos.append(curso)

    def add_disciplina(self, nome_curso, disciplina, ementa):
        for curso in self.cursos:
            if curso.curso.lower() != nome_curso:
                continue

            curso.add_disciplina(disciplina, ementa)

    def __str__(self):
        return 'Fatec ' + self.cidade

    def __repr__(self):
        return str(self)
