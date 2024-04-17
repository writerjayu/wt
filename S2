//S2.1

//save this with S2_1.html


<!DOCTYPE html>
	<html>
		<form action="s2_1b.php" method="get">
			Enter font style : <select name=s1 id=style>
                                           <option>Times new Roman</option>
                                           <option>aerial</option>
					   </select>
				           <br>
			Enter font size : <select name=fs id=size>
                                           <option>8</option>
                                           <option>10</option>
					   <option>14</option>
                                           <option>20</option>
					   <option>22</option>
					   <option>30</option>
					   </select> 
                                           <br>
			Enter font colour : <select name=fc id=color>
                                           <option>red</option>
                                           <option>blue</option>
					   <option>green</option>
                                           <option>pink</option>
					   <option>purple</option>
					   <option>orange</option>
					   </select> 
                                           <br>
			Enter Background color : <select name=bg id=bgcolor>
                                           <option>red</option>
                                           <option>blue</option>
					   <option>green</option>
                                           <option>pink</option>
					   <option>purple</option>
					   <option>orange</option>
					   </select> 
                                           <br>
			<input type=submit name=submit>
		</form>
	<html>


//save this part with s2_1b.php
<?php
	$style=$_GET["s1"];
	$f_size=$_GET["fc"];
	$f_color=$_GET["fs"];
	$bgcolor=$_GET["bg"];
	echo "Style is:".$style;
	echo "<br>Font size is: ".$f_size;
	echo "<br>font colour is:".$f_color;
	echo "<br>Background color:".$bgcolor;
	setcookie("a",$style);
	setcookie("b",$f_size);
	setcookie("c",$f_color);
	setcookie("d",$bgcolor);
?>
<!DOCTYPE html>
	<html>
		<form action=s2_1c.php method=get>
			<br><input type=submit value=submit>
		</form>
	</html>


// save this with  s2_1c.php



<?php
$style = $_COOKIE['a'];
$color = $_COOKIE['b'];
$size = $_COOKIE['c'];
$b_color = $_COOKIE['d'];
$msg = "Hello";
echo "<body bgcolor=$b_color>";
echo "<font color=$color font-size=$size>$msg";
echo "</font></body>";
?>


//S2.2
			
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

			



