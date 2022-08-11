# Importa o módulo pickle, que é uma biblioteca padrão do python para
# tratar arquivos serializados de forma binária
import pickle


# Compara o dunder de __name__, para que o bloco condicional só seja
# executado quando o script estiver sendo chamado diretamente
if __name__ == "__main__":
    # Abre um arquivo usando open() no modo de leitura 'rb'
    with open('registros.bin', 'rb') as arquivo:
        # Usa o módulo pickle para ler o conteúdo de arquivo serializado
        # como uma listas de tuplas e carregar essa lista em uma variável
        registros = pickle.load(arquivo)

        # Percorrendo a lista de registros
        for registro in registros:
            # Acessando um elemento da tupla registro
            nome = registro[0]

            # Exibe apenas os nomes que começam com 'M'
            if nome.startswith('M'):
                print(nome)

        # Cria uma lista vazia para filtrar os endereços de SP
        estado_sp = []

        for registro in registros:
            endereco = registro[1]

            # Adiciona apenas os registros de 'SP' usando o operador 'in',
            # ou seja, buscando por uma substring dentro da string de
            # endereço
            if '/ SP' in endereco:
                # Adiciona um novo elemento no final da lista, sem alterar
                # a posição dos elementos já na lista
                estado_sp.append(registro)

        print(estado_sp)
