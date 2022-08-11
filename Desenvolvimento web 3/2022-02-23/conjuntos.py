if __name__ == '__main__':
    # Conjuntos em python são representados pela estrutura set, mantendo
    # uma coleção de itens não duplicados e não ordenados
    # Esses conjuntos possuem as mesmas operações que na matemática, isso
    # é, são capazes de produzir uniões, interseções, diferenças, etc
    conjunto_a = {'abóbora', 'arroz'}
    conjunto_b = {'coca-cola', 'arroz'}

    # União de conjuntos
    uniao = conjunto_a.union(conjunto_b)  # Unindo por método
    uniao = conjunto_a | conjunto_b  # Unindo por operador
    print(uniao)

    # Interseção de conjuntos
    intersecao = conjunto_a.intersection(conjunto_b)  # Por método
    intersecao = conjunto_a & conjunto_b  # Por operador
    print(intersecao)

    # Verifica se o conjunto A é um sub conjunto da união dos conjuntos
    e_subconjunto = conjunto_a.issubset(uniao)  # Por método
    e_subconjunto = conjunto_a < uniao  # Por operador
    print(e_subconjunto)

    # Obtém a diferença entre os conjuntos
    diferenca = conjunto_a.difference(conjunto_b)  # Por método
    diferenca = conjunto_a - conjunto_b  # Por operador
    print(diferenca)
