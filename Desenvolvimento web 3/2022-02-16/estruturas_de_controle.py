'''
Condições
'''
idade = int(input('Idade: '))

# if else clássico
if idade >= 18:
    print("Maior de idade")
else:
    print("Menor de idade")

# estrutura de ternário, possibilita o uso de if else simples em uma linha
print("Maior de idade" if idade >= 18 else "Menor de idade")

'''
Iterações
'''
# Python não usa variaveis de controle, apenas objetos iteraveis, como:
# - operador range
# - listas, sets e tuplas
# - dicionários
# - strings (aka. cadeias de caracteres)
for i in range(10): # onde 'i' é cada elemento do objeto iteravel
    print(i)
