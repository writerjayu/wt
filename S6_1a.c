//save this with s6_book.xml

<?xml version="1.0" encoding="UTF-8"?>
<BookInfo>
	<Book>
		<bookno>1</bookno>
		<Bookname>Java</Bookname>
		<authorname>balguru swami</authorname>
		<Price>250</Price>
		<year>2006</year>
	</Book>
	<Book>
	<bookno>2</bookno>
	<Bookname>C</Bookname>  
	<authorname>Denis Ritchie</authorname>
	<Price>500</Price>
	<year>1971</year>
	</Book>
</BookInfo>


//S6.1
//save this part with s6.php

<?php
	$xml=simplexml_load_file("s6_book.xml");
	foreach($xml->Book as $bk)
	{
		echo "BookNo = $bk->bookno "."<br>";
		echo "Book name= $bk->Bookname"."<br>";
        echo "author Name = $bk->authorname "."<br>";
        echo "Book Price = $bk->Price "."<br>"; 
        echo "Book Release Year= $bk->year"."<br>";
	}
?>

//S6.2


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