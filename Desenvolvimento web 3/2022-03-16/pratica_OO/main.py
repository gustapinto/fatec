from pratica_OO import SalaAula, Professor
        
if __name__ == "__main__":
    orlando_saraiva = Professor('Orlando', 'Saraiva')
    sala1 = SalaAula(orlando_saraiva)
    sala1.adicionar_aluno('José', 'da Silva', 'DSM')
    sala1.adicionar_aluno('Maria', 'Fernanda', 'DSM')
    sala1.adicionar_aluno('Antonio', 'Pereira', 'DSM')

    print(sala1)
    print(sala1.alunos)
