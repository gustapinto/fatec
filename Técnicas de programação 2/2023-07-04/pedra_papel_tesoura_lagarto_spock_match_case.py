import random
import sys

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

def testes():
    cases = [
        { 'usuario': 'pedra', 'maquina': 'pedra', 'expected': 'empate'},
        { 'usuario': 'pedra', 'maquina': 'tesoura', 'expected': 'usuario'},
        { 'usuario': 'pedra', 'maquina': 'lagarto', 'expected': 'usuario'},
        { 'usuario': 'pedra', 'maquina': 'papel', 'expected': 'maquina'},
        { 'usuario': 'pedra', 'maquina': 'spock', 'expected': 'maquina'},
        { 'usuario': 'papel', 'maquina': 'pedra', 'expected': 'usuario'},
        { 'usuario': 'papel', 'maquina': 'spock', 'expected': 'usuario'},
        { 'usuario': 'papel', 'maquina': 'tesoura', 'expected': 'maquina'},
        { 'usuario': 'papel', 'maquina': 'lagarto', 'expected': 'maquina'},
        { 'usuario': 'tesoura', 'maquina': 'papel', 'expected': 'usuario'},
        { 'usuario': 'tesoura', 'maquina': 'lagarto', 'expected': 'usuario'},
        { 'usuario': 'tesoura', 'maquina': 'pedra', 'expected': 'maquina'},
        { 'usuario': 'tesoura', 'maquina': 'spock', 'expected': 'maquina'},
        { 'usuario': 'lagarto', 'maquina': 'papel', 'expected': 'usuario'},
        { 'usuario': 'lagarto', 'maquina': 'spock', 'expected': 'usuario'},
        { 'usuario': 'lagarto', 'maquina': 'tesoura', 'expected': 'maquina'},
        { 'usuario': 'lagarto', 'maquina': 'tesoura', 'expected': 'maquina'},
        { 'usuario': 'spock', 'maquina': 'tesoura', 'expected': 'usuario'},
        { 'usuario': 'spock', 'maquina': 'pedra', 'expected': 'usuario'},
        { 'usuario': 'spock', 'maquina': 'lagarto', 'expected': 'maquina'},
        { 'usuario': 'spock', 'maquina': 'lagarto', 'expected': 'maquina'},
        { 'usuario': 'spock', 'maquina': 'papel', 'expected': 'maquina'},
    ]
    teve_falhas = False

    for case in cases:
        resultado = calcular_ganhador(case['usuario'], case['maquina'])

        if case['expected'] == resultado:
            print(f'Sucesso - {case["usuario"]} x {case["maquina"]} passou nos testes!')
        else:
            print(f'Erro - {case["usuario"]} x {case["maquina"]} não passou nos testes!')
            print(f'    Esperado: {case["expected"]}')
            print(f'    Obteve: {resultado}')

            teve_falhas = True

    sys.exit(1 if teve_falhas else 0)

testes()

jogada_usuario = fazer_jogada()
jogada_maquina = random.choice(jogadas)
ganhador = calcular_ganhador(jogada_usuario, jogada_maquina)

print('\nJogada do usuário: ' + jogada_usuario)
print('Jogada da máquina: ' + jogada_maquina)
print('\nGanhador: ' + ganhador + '!')
