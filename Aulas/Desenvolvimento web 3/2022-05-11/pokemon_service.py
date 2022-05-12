import requests


class PokemonService:
    def __init__(self):
        self.URL = 'https://pokeapi.com/api/v2'
    
    def lista_pokemons(self):
        pokemons = []

        for numero in range(1, 1000):
            response = requests.get(f'{self.URL}/pokemon/{numero}')
            if not response.ok:
                break

            data = response.json()
            pokemons.append((numero, data['name']))

        return pokemons
    
    def dados_pokemon(self, id):
        response = requests.get(f'{self.URL}/pokemon/{id}')

        data = response.json()
        tipos = [t for t in data['types']]

        return (data['name'], tipos)
    
    def __str__(self):
        return 'Serviço Pokemon'
    
    def __repr__(self):
        return str(self)


if __name__ == '__main__':
    service = PokemonService()

    service.lista_pokemons()
