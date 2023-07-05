import random

jogadas = [
    'pedra',
    'papel',
    'tesoura',
    'lagarto',
    'spock'
]

def fazer_jogada():
    print('\nJogadas: ')

    for i, jogada in enumerate(jogadas):
        print(str(i) + ' - ' + jogada)

    try:
        return jogadas[int(input('Faça sua jogada: '))]
    except IndexError:  # Tratando entrada inválida
        print('\nTente novamente com uma jogada válida entre 0 e 4!')

        return fazer_jogada()

def calcular_ganhador(jogada_usuario, jogada_maquina):
    if jogada_usuario == jogada_maquina:
       return 'empate'

    if (jogada_usuario == 'pedra' and jogada_maquina in ['tesoura', 'lagarto']) or \
        (jogada_usuario == 'papel' and jogada_maquina in ['pedra', 'spock']) or \
        (jogada_usuario == 'tesoura' and jogada_maquina in ['papel', 'lagarto']) or \
        (jogada_usuario == 'lagarto' and jogada_maquina in ['papel', 'spock']) or \
        (jogada_usuario == 'spock' and jogada_maquina in ['tesoura', 'pedra']):
        return 'usuario'

    return 'maquina'

jogada_usuario = fazer_jogada()
jogada_maquina = random.choice(jogadas)
ganhador = calcular_ganhador(jogada_usuario, jogada_maquina)

print('\nJogada do usuário: ' + jogada_usuario)
print('Jogada da máquina: ' + jogada_maquina)
print('\nGanhador: ' + ganhador + '!')
