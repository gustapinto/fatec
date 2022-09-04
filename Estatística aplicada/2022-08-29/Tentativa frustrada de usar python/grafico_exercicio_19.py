import pandas as pd


dataset = {
    'Anos': [1983, 1984, 1985, 1986],
    'Número (milhares)': [1420, 1596, 1736, 1934]
}

df = pd.DataFrame(dataset).set_index('Anos')
plt = df.plot(kind='bar', title='Chegada de visitantes\nBrasil - 1983-86',
              figsize=(15, 10))
plt.set_xlabel('Anos')
plt.set_ylabel('Número (milhares)')

fig = plt.get_figure()
fig.savefig('imgs/Exercício 19.png')
