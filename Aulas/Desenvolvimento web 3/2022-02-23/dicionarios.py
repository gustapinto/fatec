if __name__ == '__main__':
    # Dicionários são os mapas e tabelas de hash do python, ou seja, são
    # estruturas do tipo chave -> valor, os dicionários podem ser criados
    # por meio dos operadores {chave: valor, ...}
    dicionario = {'chave1': 'valor1', 'chave2': 'valor2'}
    print(dicionario)

    # Também podemos criar dicionários a partir da função dict() passando
    # as chaves e valores como parâmetros nomeados
    dicionario_por_funcao = dict(chave1='valor1', chave2='valor2')
    print(dicionario_por_funcao)

    # Também podemos criar dicionários a partir de uma lista de tuplas na
    # função dict(tupla)
    dicionario_por_tupla = dict([('chave1', 'valor1'), ('chave2', 'valor2')])
    print(dicionario_por_tupla)

    # Obtendo apenas as chaves de um dicionário, o retorno é um objeto
    # iterável que pode ser convertido para listas, tuplas, sets, etc
    chaves = dicionario.keys()
    print(chaves)

    # Obtendo apenas os valores do dicionário, o retorno é um objeto
    # iterável que pode ser convertido para listas, tuplas, sets, etc
    valores = dicionario.values()
    print(valores)

    # Acessando um elemento do dicionário por chave
    valor = dicionario['chave1']
    print(valor)

    # Acessando um elemento do dicionário, definindo um valor padrão se
    # a chave buscada não existe
    valor_get = dicionario.get('chave3', None)
    print(valor_get)
