//S16.1
 <?xml version="1.0" encoding="UTF-8"?>
<book>
<info>
<bno>1</bno>
<name>c</name>
<author>xyz</author>
</info>
<info>
<bno>2</bno>
<name>php</name>
<author>abc</author>
</info>
<info>
<bno>3</bno>
<name>java</name>
<author>pqr</author>
</info>
</book>
<html>
    <head>
        <script language="javascript" src="book.js">
        </script>
    </head>
    <body>
        <form id="frm" name="frm" action="javascript:search(document.getElementById('frm'));">
            enter book name:
            <input type="text" id="t1"><br>
            <input type="submit" value="search"><br>
        </form>
        <div name="txt" id="txt">
           
        </div>
    </body>
</html>
<script>
function search(obj)
{
    var XHRobj=false;
    if(window.XMLHttpRequest)
    {
        XHRobj=new XMLHttpRequest();
    }
    else if(window.ActiveXObject)
    {
        XHRobj=new ActiveXObject("Microsoft.XMLHTTP");
    }
    var str1="t1="+document.getElementById("t1").value;
    XHRobj.onreadystatechange=show;
    XHRobj.open('POST','book.php',true);
    XHRobj.setRequestHeader("content-type","application/x-www-form-urlencoded");
    XHRobj.send(str1);
    function show()
    {
        if(XHRobj.readyState==4)
        {
            if(XHRobj.status==200)
            {
                result=XHRobj.responseText;
                document.getElementById('txt').innerHTML=result;
            }
        }
    }
 
}




//S16.2

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