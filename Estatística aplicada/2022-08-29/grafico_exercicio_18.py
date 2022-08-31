import pandas as pd


dataset = {
    'Anos': [1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988],
    'Exportação': [98_010, 109_100, 123_994, 119_990, 178_790, 141_737, 146_351,
                   133_832, 142_382, 169_396],
    'Importação': [75_328, 71_855, 64_066, 60_718, 55_056, 53_988, 48_870,
                   60_605, 61_975, 58_085]
}

df = pd.DataFrame(dataset)
# Define uma das colunas do DataFrame como seu indíce
df = df.set_index('Anos')

# Cria um gráfico
plt = df.plot(kind='line', title='Comércio exterior\nBrasil - 1979-88',
              figsize=(15, 10))
plt.set_xlabel('Anos')
plt.set_ylabel('Quantidade (1.000 t)')

fig = plt.get_figure()
fig.savefig('imgs/Exercício 18.png')
