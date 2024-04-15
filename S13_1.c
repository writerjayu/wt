//S13.1
 <!DOCTYPE html>
<html>
<head>
    <title>AJAX Example</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
</head>
<body>
    <input type="text" id="nameInput">
    <div id="response"></div>
    <script>
        $(document).ready(function() {
            $("#nameInput").on("input", function() {
                var name = $(this).val();
                if (name === "") {
                    $("#response").html("Stranger, please tell me your name!");
                } else if (["Rohit", "Virat", "Dhoni", "Ashwin", "Harbhajan"].includes(name)) {
                    $("#response").html("Hello, master!");
                } else {
                    $("#response").html(name + ", I don't know you!");
                }
            });
        });
    </script>
</body>
</html>


//S13.2
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
