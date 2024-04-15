//S15.1

html>
    <head>
        <script language="javascript" src="sugg.js">
        </script>
    </head>
    <body>
        <form id="frm" name="frm">
            search:
            <input type="text" id="t1"onkeyup="javascript:search(document.getElementById('frm'));"><br>
        </form>
        <div name="txt" id="txt">
           
        </div>
    </body>
</html>
<script src="">
 
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
    XHRobj.open('POST','sugg.php',true);
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
</script>
 
<?php
$name=$_POST["t1"];
$a=array("sai","sham","soham","amna","apeksha","aarati");
foreach($a as $v)
{
if(strstr($v,$name))
echo"<br>".$v;
}
?>



//S15.2
//
import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules
//
transactions=[['bread', 'milk'],
['bread', 'diaper', 'beer', 'eggs'],
['milk', 'diaper', 'beer', 'coke'],
['bread', 'milk', 'diaper', 'beer'],
['bread', 'milk', 'diaper', 'coke']]
from mlxtend.preprocessing import TransactionEncoder
te=TransactionEncoder()
te_array=te.fit(transactions).transform(transactions) 
df=pd.DataFrame(te_array,columns=te.columns_)
df
//
freq_items=apriori (df,min_support=0.5,use_colnames=True)
print(freq_items)
//
rules=association_rules(freq_items,metric='support',min_threshold=0.05)
rules=rules.sort_values(['support','confidence'], ascending=[False, False])
print(rules)