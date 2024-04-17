//S20.1(save this with xml)
<?xml version="1.0" encoding="UTF-8"?>
<?xml-stylesheet type='text/xsl' href='cgpa.xsl'?> 
<class>
<student>
<name> ABC </name>
<id> 001 </id>
<branch> IT </branch>
<cgpa> 9 </cgpa>
</student>
<student>
<name> PQR </name>
<id> 004 </id>
<branch> Computer </branch>
<cgpa> 7 </cgpa>
</student>
<student>
<name> XYZ </name>
<id> 006 </id>
<branch> IT </branch>
<cgpa> 10 </cgpa>
</student>
</class>
<student>
<name> adc </name>
<id> 007 </id>
<branch> IT </branch>
<cgpa> 9 </cgpa>
</student>
</class>
<student>
<name> qyu </name>
<id> 0011 </id>
<branch> IT </branch>
<cgpa> 6 </cgpa>
</student>
</class>







//S20.2
//

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
df=pd.read_csv("C:/Users/admin/Desktop/Practical exam/Data Analytics/DA/dataset/User_Data.csv")
df

//
x=df.iloc[:, [2, 3]].values 
y=df.iloc[:, 4].values
//
from sklearn.model_selection import train_test_split
xtrain, xtest, ytrain, ytest= train_test_split(x, y, test_size=0.5, random_state=0)
from sklearn.preprocessing import StandardScaler
sc_x=StandardScaler()
xtrain=sc_x.fit_transform(xtrain) 
xtest=sc_x.transform(xtest)
print (xtrain[0:10, :])
//
from sklearn.linear_model  import LogisticRegression 
classifier=LogisticRegression(random_state=0) 
classifier.fit(xtrain, ytrain)
//
y_pred=classifier.predict(xtest)
//
//

from sklearn.metrics import confusion_matrix 
cm=confusion_matrix(ytest, y_pred) 
print("Confusion Matrix: \n", cm)
//
from sklearn.metrics import accuracy_score
print ("Accuracy: ", accuracy_score (ytest, y_pred))
//
from matplotlib.colors import ListedColormap
X_set, y_set ,xtest, ytest
X1, X2= np.meshgrid (np.arange(start= x_set[:, 0].min() - 1,
                            stop = x_set[:, e].max() + 1, step = 0.01), 
                    np.arange(start = x_set[:, 1].min() - 1,
                            stop = x_set[:, 1].max() + 1, step = 0.01))
plt.contourf(X1, X2, classifier.predict(
             np.array([X1.ravel(), X2.ravel()]).T).reshape(
             X1.shape), alpha = 0.75, cmap= ListedColormap (('pink', 'grey')))
plt.xlim(X1.min(), X1.max()) 
plt.ylim(X2.min(), X2.max())
for i, j in enumerate(np.unique(y_set)):
    plt.scatter(X_set[ y_set == j, 0], X_set[y_set == j, 1],
                 c = ListedColormap (('blue', 'pink'))(1), label = j)
plt.title('Classifier (Test set)')
plt.xlabel('Age')
plt.ylabel('Estimated Salary')
plt.legend()
plt.show()

