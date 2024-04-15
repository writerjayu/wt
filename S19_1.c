//S19.1
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Login Form</title>
  </head>
  <body>
    <form name="loginForm" onsubmit="return validateForm()">
      <label for="username">Username:</label>
      <input type="text" id="username" name="username"><br>
 
      <label for="password">Password:</label>
      <input type="password" id="password" name="password"><br>
 
      <input type="submit" value="Submit">
    </form>
 
    <script>
      function validateForm() {
        // Get the values of the username and password input fields
        var username = document.forms["loginForm"]["username"].value;
        var password = document.forms["loginForm"]["password"].value;
 
        // Validate the username and password
        if (username == null || username == "") {
          alert("Please enter a username.");
          return false;
        } else if (password == null || password == "") {
          alert("Please enter a password.");
          return false;
        } else {
          return true;
        }
      }
    </script>
  </body>
</html>


//S19.2
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