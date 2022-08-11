from datetime import date

class Aluno:
    def __init__(self, nome, sobrenome, curso):
        self._nome = nome
        self._sobrenome = sobrenome
        self._curso = curso

    @property
    def nome(self):
        return self._nome

    @nome.setter
    def nome(self, nome):
        self._nome = nome

    @property
    def sobrenome(self):
        return self._sobrenome

    @sobrenome.setter
    def sobrenome(self, valor):
        self._sobrenome = valor

    def __str__(self):
        return self.nome

    def __repr__(self):
        return f'{self.nome} {self.sobrenome}'


class Professor:
    def __init__(self, nome, sobrenome):
        self._nome = nome
        self._sobrenome = sobrenome
        self._disciplinas = []

    @property
    def nome(self):
        return self._nome

    @nome.setter
    def nome(self, valor):
        self._nome = valor

    @property
    def disciplina(self):
        return self._disciplinas

    def adicionar_disciplina(self, disciplina):
        self.disciplina.append(disciplina)

    def __str__(self):
        return self.nome

    def __repr__(self):
        return self.nome


class SalaAula:
    def __init__(self, professor):
        if isinstance(professor, Professor):
            self._professor = professor
        else:
            raise TypeError('Tipo do professor precisa instância de Professor')
        self._alunos = []

    @property
    def professor(self):
        return str(self._professor)

    @property
    def alunos(self):
        return self._alunos

    def adicionar_aluno(self, nome, sobrenome, curso):
        aluno = Aluno(nome, sobrenome, curso)

        self.alunos.append(aluno)

    def busca_aluno(self, nome_procurado):
        for aluno in self.alunos:
            if aluno.nome == nome_procurado:
                return aluno

        return None
    
    def __str__(self):
        return 'Sala com prof. ' + self.professor

    def __repr__(self):
        return str(self)
