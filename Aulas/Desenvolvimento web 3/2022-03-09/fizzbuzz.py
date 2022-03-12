def fizzbuzz(numero):
    if numero % 15 == 0:
        return 'fizzbuzz'
    if numero % 5 == 0:
        return 'buzz'
    if numero % 3 == 0:
        return 'fizz'

    return numero


if __name__ == '__main__':
    lista = [fizzbuzz(i) for i in range(1, 101)]

    assert lista[0] == 1
    assert lista[2] == 'fizz'
    assert lista[4] == 'buzz'
    assert lista[6] == 7
    assert lista[14] == 'fizzbuzz'
    assert lista[29] == 'fizzbuzz'
