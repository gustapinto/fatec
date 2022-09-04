import pandas as pd


dataset = {
    'Região': ['Norte', 'Nordeste', 'Sudeste', 'Sul', 'Centro-Oeste'],
    'Quantidade': [66_092, 356_810, 937_463, 485_098, 118_468]
}

df = pd.DataFrame(dataset).set_index('Região')
plt = df.plot(kind='barh', title='Produção de ovos de galinha\nBrasil - 1988',
              figsize=(15, 10))
plt.set_xlabel('Região')
plt.set_ylabel('Quantidade (1.000 dúzias)')

fig = plt.get_figure()
fig.savefig('imgs/Exercício 20.png')
