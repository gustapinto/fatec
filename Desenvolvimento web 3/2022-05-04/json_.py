import json # Biblioteca padrão do python para lidar com json


if __name__ == '__main__':
    dic = {'sala': 'Dev web 3', 'professor': 'Orlando'}
    texto = json.dumps(dic)  # Serializando JSON para string

    print(dic, texto)
    print(type(dic), type(texto))

