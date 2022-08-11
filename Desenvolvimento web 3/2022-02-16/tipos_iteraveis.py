'''
Listas
'''
# Listas são objetos iteráveis equivalentes a arrays e vetores dinâmicos, com
# essas podendo ser dinâmicas pois a linguagem trata todos os tipos como objetos
lista = ['maçã', 'tomate', 'chocolate', 'pizza']

for produto in lista:
    print(produto)

# acessa elementos da lista
print(lista[2])

# adiciona novos objetos no final da lista
lista.append('cerveja')
print(lista)

# adiciona novos objetos em posições definidas
lista.insert(1, 'alface')
print(lista)

# removendo elementos da lista
lista.remove('cerveja')
print(lista)

'''
Tuplas
'''
# São objetos iteráveis como as listas, porém com seus elementos sendo imutáveis
# ou seja, não podemos alterar as informações presentes na tuplas após a mesma
# ser criada
tupla = ('foo', 'bar', 'foo')
print(tupla)

# acessando elementos da tupla
print(tupla[0])
print(tupla[-1]) # acessa o último elemento da tupla

# conta a recorrência de elementos na tupla
print(tupla.count('foo'))

# obtem o indice do elemento na tupla a partir do seu valor
print(tupla.index('bar'))


'''
Exercícios
'''
# 1. exbir apenas os elementos que começam com 'F'
registro = ('Orlando', 'Saraiva', 'professor', 'Fatec araras', 'Fatec')

for element in registro:
    if element.startswith('F'):
        print(element)
