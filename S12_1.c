//S12.1(Ajax)
 <!DOCTYPE html>
<html>
<head>
    <title>Contacts</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
    <script src="script.js"></script>
</head>
<body>
    <h1>Contacts</h1>
    <button id="printBtn">Print Contacts</button>
    <table id="contactsTable">
        <thead>
            <tr>
                <th>Sr No</th>
                <th>Name</th>
                <th>Residence Number</th>
                <th>Mobile Number</th>
                <th>Address</th>
            </tr>
        </thead>
        <tbody></tbody>
    </table>
</body>
</html>
<script >
    $(document).ready(function() {
    $('#printBtn').on('click', function() {
        $.ajax({
            url: 'contact.dat',
            type: 'GET',
            dataType: 'text',
            success: function(data) {
                let contacts = data.split('\n');
                let tbody = $('#contactsTable tbody');
                tbody.empty(); // Clear any existing rows from the table body
                for (let i = 0; i < contacts.length; i++) {
                    let fields = contacts[i].split(',');
                    if (fields.length === 5) { // Only process lines with 5 fields
                        let srno = fields[0].trim();
                        let name = fields[1].trim();
                        let residenceNumber = fields[2].trim();
                        let mobileNumber = fields[3].trim();
                        let address = fields[4].trim();
                        let row = '<tr><td>' + srno + '</td><td>' + name + '</td><td>' + residenceNumber + '</td><td>' + mobileNumber + '</td><td>' + address + '</td></tr>';
                        tbody.append(row);
                    }
                }
            },
            error: function(jqXHR, textStatus, errorThrown) {
                alert('Error retrieving contacts: ' + textStatus + ', ' + errorThrown);
            }
        });
    });
});
 
</script>


//S12.2



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