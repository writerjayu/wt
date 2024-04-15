//S24.1(XML)

 <?xml version="1.0" encoding="UTF-8"?>
<?xml-stylesheet type="text/css" href="stud.css"?>
<student>
<info>
<sno>101</sno>
<name>om</name>
<course>bcs</course>
<college>rbnb</college>
</info>
<info>
<sno>102</sno>
<name>sai</name>
<course>bcs</course>
<college>rbnb</college>
</info>
<info>
<sno>103</sno>
<name>ram</name>
<course>bca</course>
<college>cdj</college>
</info>
</student>



<html>
    <form method="post" action="stud.php">
        enter course to search:
        <input type="text" name="t1"><br>
        <input type="submit" value="search">
    </form>
</html>
 
stud.php
 
<?php
$ob=simplexml_load_file("stud.xml");
if($ob==false)
    die("file not found");
$c=$_POST["t1"];
echo"<table border=1";
echo"<tr><th>rno<th>name<th>course<th>college</tr>";
foreach($ob->info as $a)
{
    if($a->course==$c)
    {
    echo"<tr><td>".$a->sno;
    echo"<td>".$a->name;
    echo"<td>".$a->course;
    echo"<td>".$a->college;
    echo"</tr>";
}
}
echo"</table>";
?>

//S24.2
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