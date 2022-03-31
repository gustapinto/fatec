class Disciplina:
    def __init__(self,  **kwargs):
        self._disciplina = kwargs.get('disciplina', None)
        self._ementa = kwargs.get('ementa', '')
        if self.disciplina is None:
            raise ValueError('Disciplina não informada')

    @property
    def disciplina(self):
        return self._disciplina

    @disciplina.setter
    def disciplina(self, valor):
        self._disciplina = valor

    @property
    def ementa(self):
        return self._ementa

    @ementa.setter
    def ementa(self, valor):
        self._ementa = valor

    def __str__(self):
        return self.disciplina

    def __repr__(self):
        return str(self)
