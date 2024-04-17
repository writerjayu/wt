/S11.1
//save this with s11.html


<html>
  <head>
    <style>
      img {
        display: none;
        width: 500px;
        aspect-ratio: 1;
        object-fit: cover;
      }
    </style>
  </head>
  <body>
    <input type="text" id="txtfield" />
    <button id="btn" onclick="readText()">Submit</button>
    <p id="name" onclick="changeName()"></p>
    <img src="./unsplash.jpg" id="image" onclick="changeImage()" />

    <script>
      var text = document.getElementById("txtfield");
      const name = document.querySelector("#name");
      var btn = document.getElementById("btn");
      var image = document.getElementById("image");

      function readText() {
        if (text.value != "") {
          image.style.display = "none";
          name.innerText = text.value;
          image.style.width = "500px";
        } else {
          name.innerText = "";
          image.style.display = "block";
          name.style.color = "black";
          name.style.fontSize = "16px";
        }
      }

      function changeName() {
        if (name.innerText == "") return;

        name.style.color = "red";
        name.style.fontSize = "18px";
      }

      function changeImage() {
        if (image.style.display == "none") return;

        image.style.width = "700px";
      }
    </script>
  </body>
</html>



//S11.2


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


