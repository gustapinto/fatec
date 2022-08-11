import requests


if __name__ == '__main__':
    url = 'https://pokeapi.co/api/v2/ability'

    # Faz uma requisição HTTP GET na api
    resposta = requests.get(url)

    # Obtém os dados da response e o transforma de JSON para um dict
    dados = resposta.json()

    # Filtrando os dados recebidos
    results = dados['results']

    for result in results:
        print(result['name'], result['url'])
