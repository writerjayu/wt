//S4.1

//save this part with  s4_1a.html

<!DOCTYPE html>

	<html>

		<form action="s4_1b.php" method=get>

			<b>Enter Employee Details :</b><br>

			Enter Employee no<input type=number name="no"><br>

			Enter Employee name<input type=text name="name"><br>

			Enter Employee Address<input type=text name="addr"><br>

			<input type=submit name=submit>

		</form>

	</html>
//save this part with  s4_1b.php

<?php 

	session_start();

	$eno=$_GET["no"];

	$ename=$_GET["name"];

	$address=$_GET["addr"];

	$_SESSION['eno'] = $eno;

         $_SESSION['enm'] = $ename;

         $_SESSION['eadd'] = $address;

?>

<!DOCTYPE html>

	<html>

		<form action="s4_1c.php" method=get>

			<b>Enter Employee Earnings :</b><br>

			Enter Employee Basic<input type=number name="basic"><br>

			Enter Employee Daily allownace<input type=text name="da"><br>

			Enter Employee HRA<input type=text name="hra"><br>

			<input type=submit name=submit>

		</form>

	</html>

// save this part s4_1c.php

<?p<?php

	session_start();

     $basic= $_GET['basic'];

     $da = $_GET['da'];

     $hra = $_GET['hra'];

      echo "<h3>Employee Details</h3> ";

      echo "Name : ".$_SESSION['eno']."<br>";

      echo "Address : ".$_SESSION['enm']."<br>";

      echo "Class : ".$_SESSION['eadd']."<br><br>";

      echo "basic : ".$basic."<br>";

      echo "DA : ".$da."<br>";

      echo "HRA : ".$hra."<br>";

      $total = $basic+$da+$hra;

echo "<h2>Total Of Earnings Is : ".$total."</h2>";


?>

//S4.2

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
