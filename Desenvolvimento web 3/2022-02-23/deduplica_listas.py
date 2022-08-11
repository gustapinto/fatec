if __name__ == '__main__':
    lista_duplicada = ['arroz', 'coca-cola', 'arroz', 'feijão', 'pepsi',
                       'macarrão', 'arroz', 'cerveja', 'feijão', 'doli']

    # Usa set() para deduplicar os elementos da lista, já que set é uma
    # estrutura de dados python que por natureza não aceita duplicatas,
    # note que o set() não é ordenado, logo a ordem vai sempre mudar
    lista_deduplicada_por_conjunto = list(set(lista_duplicada))

    print(lista_deduplicada_por_conjunto)

    # Usa o operador 'for' para deduplicar manualmente a lista
    lista_deduplicada_manualmente= []

    for elemento in lista_duplicada:
        if elemento not in lista_deduplicada_manualmente:
            lista_deduplicada_manualmente.append(elemento)

    print(lista_deduplicada_manualmente)
