import csv
from urllib import request

from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import (
    accuracy_score,
    precision_score,
    recall_score,
    f1_score,
    confusion_matrix,
)


CSV_URL = 'https://raw.githubusercontent.com/autonomio/datasets/master/autonomio-datasets/iris.csv'
RANDOM_STATE = 42
PREDICTION_AVERAGE = 'weighted'

iris_rows = []

with request.urlopen(CSV_URL) as response:
    iris_data = [r.decode('utf-8') for r in response.readlines()]
    iris_csv_reader = csv.reader(iris_data)
    iris_rows = list(iris_csv_reader)

iris_features = []
iris_labels = []

# Itera sobre as linhas menosprezando a linha de cabeçalho
for row in iris_rows[1:]:
    features = [float(value) for value in row[:-1]]
    label = row[-1]

    iris_features.append(features)
    iris_labels.append(label)

data_train, data_test, target_train, target_test = train_test_split(iris_features,
                                                                    iris_labels,
                                                                    test_size=0.7,
                                                                    random_state=RANDOM_STATE)

classifier = DecisionTreeClassifier(random_state=RANDOM_STATE)

classifier.fit(data_train, target_train)

target_prediction = classifier.predict(data_test)

accuracy = accuracy_score(target_test, target_prediction)
precision = precision_score(target_test, target_prediction, average=PREDICTION_AVERAGE)
recall = recall_score(target_test, target_prediction, average=PREDICTION_AVERAGE)
f1 = f1_score(target_test, target_prediction, average=PREDICTION_AVERAGE)
confusion = confusion_matrix(target_test, target_prediction)

print('Acurácia:', accuracy)
print('Precisão:', precision)
print('Revocação:', recall)
print('F1 Score:', f1)
print('Matriz de confusão:\n', confusion)