from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import (
    accuracy_score,
    precision_score,
    recall_score,
    f1_score,
    confusion_matrix,
)

RANDOM_STATE = 42
PREDICTION_AVERAGE = 'weighted'

# Carrega o dataset
iris = load_iris()
data = iris.data  # Os dados do conjunt Iris
target = iris.target  # O "Target" do conjunto Iris

# Divide o conjunto de dados em treinamento (70%) e teste (30%)
data_train, data_test, target_train, target_test = train_test_split(data,
                                                                    target,
                                                                    test_size=0.3,
                                                                    random_state=RANDOM_STATE)

# Cria um classificador de árvore de decisão
classifier = DecisionTreeClassifier(random_state=RANDOM_STATE)

# Treinando o classificador com base nos dados de treinamento
classifier.fit(data_train, target_train)

# Preditanto as amostras de teste
target_prediction = classifier.predict(data_test)

# Calculando as métricas de avaliação
accuracy = accuracy_score(target_test, target_prediction)
precision = precision_score(target_test, target_prediction, average=PREDICTION_AVERAGE)
