import pandas as pd


dataset = {
    'Candidatos': ['Janete', 'Paulo', 'Moacir', 'Fabiano', 'Brancos e nulos'],
    'Frequência absoluta': [2250, 1250, 750, 500,250],
}

df = pd.DataFrame(dataset)
df = df.set_index('Candidatos')

plt = df.plot(kind='pie', y='Frequência absoluta',
              title='Eleições para prefeito - resultado final',
              figsize=(15, 10))

fig = plt.get_figure()
fig.savefig('imgs/Exercício 21.png')
