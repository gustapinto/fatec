# Cria uma classe em python
class Pessoa:
    # Cria um construtor da linguagem usando o dunder __init__
    def __init__(self, nome, idade):
        # Atribui um atributo a classe, onde self seria igual ao this em java
        self.nome = nome
        self._idade = idade

    # Reimplementa o método object.__repr__ para imprimir uma versão amigável
    # do objeto quando o mesmo tiver que ser exibido
    def __repr__(self):
        return f'{self.nome} têm {self.idade} anos'

    # Declarando um métodos em python, eles precisam ter o argumento self
    # para serem válidos, pois self será utilizado para referenciar os
    # atributos da classe
    def nome_maiusculo(self):
        return self.nome.upper()

    # Declarando uma property em python, elas atuam como métodos que
    # podem ser acessados como variáveis, parecido com getters e setters
    @property
    def idade(self):
        return self._idade


if __name__ == '__main__':
    # Instancia a classe em um objeto
    cleitin = Pessoa('Cleitin', 43)
    jorgin = Pessoa('Jogin', 33)
    pedrin = Pessoa('Pedrin', 23)

    # Verificando se um objeto é instancia de uma classe
    print(isinstance(cleitin, Pessoa))

    # Todas as classes em Python são subclasses de object, logo qualquer
    # classe ou tipo será uma instância válida de object
    print(isinstance(cleitin, object))

    # Acessando atributos de um objeto, note o uso da property idade
    # como se a mesma fosse um atributo normal do objeto e não um método
    print(cleitin.nome, cleitin.idade)

    # Retornando uma representação do objeto sobre a forma de um dcicionário
    print(cleitin.__dict__)

    # Chamando um método da classe, obs: o argumento "self" é preenchido
    # automaticamente
    print(cleitin.nome_maiusculo())

    # Exibe a pessoa usando o método __str__ reimplementado pela classe
    print(cleitin)

    # Criando uma lista de pessoas
    pessoas = [cleitin, jorgin, pedrin]
    print(pessoas)
