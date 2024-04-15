 //S31.1
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
 
dataset = pd.read_csv('Downloads/archive/Position_Salaries.csv')
X = dataset.iloc[:, 1:-1].values
y = dataset.iloc[:, -1].values
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)
regressor = LinearRegression()
regressor.fit(X_train, y_train)
print("Training set:")
print("X_train:", X_train)
print("y_train:", y_train)
 
print("Testing set:")
print("X_test:", X_test)
print("y_test:", y_test)

//s31.2

import pandas as pd
import numpy as np
user_data = {'User ID': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
             'Age': [19, 35, 26, 27, 19, 32, 25, 29, 34, 25],
             'Estimated Salary': [19000, 20000, 43000, 57000, 76000, 58000, 84000, 15000, 43000, 22000],
             'Purchased': [0, 0, 0, 0, 0, 1, 1, 0, 1, 0]}
 
user_df = pd.DataFrame(user_data)
X = user_df.iloc[:, 1:-1].values
y = user_df.iloc[:, -1].values
from sklearn.model_selection import train_test_split
 
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)
from sklearn.linear_model import LogisticRegression
 
logistic_model = LogisticRegression()
logistic_model.fit(X_train, y_train)
y_pred = logistic_model.predict(X_test)
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score
 
print("Accuracy:", accuracy_score(y_test, y_pred))
print("Precision:", precision_score(y_test, y_pred))
print("Recall:", recall_score(y_test, y_pred))
print("F1-score:", f1_score(y_test, y_pred)


//S31.3
import pandas as pd
from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori, association_rules
 
data = [['Milk', 'Egg', 'Bread'],
        ['Milk', 'Bread'],
        ['Milk', 'Egg', 'Bread', 'Cheese'],
        ['Milk', 'Egg'],
        ['Bread', 'Cheese']]
 
te = TransactionEncoder()
te_ary = te.fit_transform(data)
tid = pd.DataFrame(te_ary, columns=te.columns_)
items = tid.astype('int')
 
items = items.replace({True: 1, False: 0})
 
min_sup_values = [0.4, 0.6, 0.8]
 
for min_sup in min_sup_values:
   
    frequent_itemsets = apriori(items, min_support=min_sup, use_colnames=True)
    rules = association_rules(frequent_itemsets, metric="confidence", min_threshold=0.7)
 
    print('Min support:', min_sup)
    print('Frequent itemsets:')
    print(frequent_itemsets)
    print('Association rules:')
    print(rules)
    print()