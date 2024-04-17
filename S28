//S28.1
<?php
 
// database connection information
$servername = "localhost";
$username = "root";
$password = "password";
$dbname = "myDB";
 
// get the username and password from the AJAX request
$username = $_POST['username'];
$password = $_POST['password'];
 
// create a connection to the database
$conn = new mysqli($servername, $username, $password, $dbname);
 
// check if the connection was successful
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
 
// prepare the SQL statement to check if the username and password are valid
$stmt = $conn->prepare("SELECT * FROM users WHERE username = ? AND password = ?");
$stmt->bind_param("ss", $username, $password);
$stmt->execute();
$result = $stmt->get_result();
 
// check if the username and password are valid
if ($result->num_rows > 0) {
    echo "valid"; // return 'valid' if the username and password are valid
} else {
    echo "invalid"; // return 'invalid' if the username and password are invalid
}
 
// close the database connection
$conn->close();
 
?>
//S28.2
import warnings
warnings.filterwarnings('ignore')
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


//
df=pd.read_csv("path.csv")
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
