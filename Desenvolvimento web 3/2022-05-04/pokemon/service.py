import requests


class PokemonService:
    def __init__(self):
        self.URL = 'https://pokeapi.co/api/v2/ability'

    def lista_pokemons(self) -> list:
        response = requests.get(self.URL)
        data = response.json()

        return data['results']

    def dados_pokemon(self) -> list:
        pass

    def __str__(self) -> str:
        return 'Serviço de Pokémon'

    def __repr__(self):
        pass
