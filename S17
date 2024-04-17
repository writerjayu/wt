//S17.1(html)


 <!DOCTYPE html>
 <html>
<body onload="showGreeting()">
<script>
function showGreeting() {

        alert("Hello, Good Morning!");

      }

    </script>

    <h1>Student Registration Form</h1>

    <form>

      Name:

      <input type="text" id="name" name="name" >

      <br>

     Email:

      <input type="email" id="email" name="email" >

      <br>

      Phone:

      <input type="tel" id="phone" name="phone" >

      <br>

      <input type="submit" value="Submit">

    </form>

  </body>

</html>



//S17.2
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
