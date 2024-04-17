
//S30.1(xml)

<?xml version="1.0" encoding="utf-8"?>
<ABCBOOK>
        <Technical>
        <BOOK>
        <Book_PubYear>ABC</Book_PubYear>
        <Book_Title>pqr</Book_Title>
        <Book_Author>400</Book_Author>
        </BOOK>
        </Technical>     
    <Cooking>
        <BOOK>
        <Book_PubYear>ABC</Book_PubYear>
        <Book_Title>pqr</Book_Title>
        <Book_Author>400</Book_Author>
        </BOOK>
    </Cooking>     
    <Yoga>
        <BOOK>
        <Book_PubYear>ABC</Book_PubYear>
        <Book_Title>pqr</Book_Title>
        <Book_Author>400</Book_Author>
        </BOOK>
    </Yoga>
</ABCBOOK>



//S30.2


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
