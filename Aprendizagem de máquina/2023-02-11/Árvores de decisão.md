# Árvores de decisão

- São uma classe de algoritimos baseados na estrtutura de dados de árvores
- Utilizam um viés indutivo, tendo preferência por ávores menores, pois as ávores maiores passam por um problema de overfitting (taxa de acerto muito alta)
- Podem ser representados por estruturas condicionais do tipo "if-then" ("se-então")
- São pareceidas com a "tabela verdade", com cada folha atribuindo uma classificação

## Entropia

- Caracteriza o nível de impureza de um conjunto inteiro de dados ou de suas colunas
- Pode ser calculada a partir de uma única classe com uso de conceitos "positivos" e "negativos", ou a partir de multiclasse, usando vários conjuntos de dados
- A proporção de entropia varia entre 0 e 1

## Ganho de informação

- É uma redução esperada na entropia por conta de uma ordenação sobre um subconjunto do conjunto
- Proporciona um "mapeamento" entre os atributos da coluna e os conceitos "positivos e negativos"

## ID3

- É o algoritimo fundamental para a construção de árvores de decisão, seguindo o modelo "top-down"
- Questões do algoritimo
  - Quem é o atributo raiz?
    - Vai ser o atributo que possuir um maior ganho de informação
    - Seus atributos são separados na sequência em que eles aparecem no conjunto
  - Quem são os ramos?
- Os atributos aparecem exclusivamente uma vez na árvore, independente do caminho na árvore
- O processo continua repetidamente até um dos ramos atingir o "atributo alvo"
- É caracterizado como um método de busca em um conjunto de hipotéses, sendo exclusivo para árvores de decisão

