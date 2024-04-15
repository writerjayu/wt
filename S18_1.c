 //S18.1
 <!DOCTYPE html>
<html>
<body>
 
<h1>Fibonacci Sequence</h1>
 
<p>Click the button to print the first 10 numbers in the Fibonacci sequence:</p>
 
<button onclick="fibonacci()">Print Fibonacci Sequence</button>
 
<p id="fib-sequence"></p>
 
<script>
function fibonacci() {
  var n = 10;
  var fib = [0, 1];
 
  for (var i = 2; i < n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
 
  document.getElementById("fib-sequence").innerHTML = fib.join(", ");
}
</script>
 
</body>
</html>



//S18.2

import warnings
warnings.filterwarnings('ignore')
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


//
df=pd.read_csv("C:/Users/admin/Desktop/Practical exam/Data Analytics/DA/dataset/User_Data.csv")
df
//
df.shape
//
df.describe()
//
df.isnull().sum()*100/df.shape[0]
//
fig, axs=plt.subplots(3, figsize = (5,5)) 
plt1= sns.boxplot (df['TV'], ax = axs[0]) 
plt2= sns.boxplot (df['RADIO'], ax = axs[1])
plt3=sns.boxplot (df['NEWSPAPER'], ax = axs [2]) 
plt.tight_layout()
//
sns.pairplot(df, x_vars=['TV', 'RADIO', 'NEWSPAPER'], y_vars='SALE', height=4, aspect=1, kind='scatter')
plt.show()
//
sns.heatmap(df.corr(), cmap-"YlGnBu", annot =True)
plt.show()
//
X=df['TV']
Y=df['SALE']

//
from sklearn.model_selection import train_test_split 
//
X_train, X_test, y_train, y_test=train_test_split(x, y, train_size=0.7, test_size=0.3, random_state,x_train,y_train)
//
X_train.head()

//
y_train.head()
//
import statsmodels.api as sm
//
X_train_sm =sm.add_constant(X_train) 
lr=sm.OLS(y_train, X_train_sm).fit()
//


lr.params

//
print(lr.summary())