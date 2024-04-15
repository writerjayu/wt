//S26.1
 <!DOCTYPE html>
<html>
<head>
  <title>Employee Details</title>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
  <script>
    $(document).ready(function() {
      $('#select-button').click(function() {
        var ename = $('#ename-input').val();
        $.ajax({
          url: 'get_employee_details.php',
          type: 'post',
          data: { ename: ename },
          success: function(response) {
            $('#employee-details').html(response);
          }
        });
      });
    });
  </script>
</head>
<body>
  <h1>Select Employee</h1>
  <input type="text" id="ename-input" placeholder="Enter employee name">
  <button id="select-button">Select</button>
  <div id="employee-details"></div>
</body>
</html>
<?php
$ename = $_POST['ename'];
 
$conn = new mysqli('localhost', 'username', 'password', 'database_name');
if ($conn->connect_error) {
  die('Connection failed: ' . $conn->connect_error);
}
 
$sql = "SELECT * FROM EMP WHERE ename = '$ename'";
$result = $conn->query($sql);
 
if ($result->num_rows > 0) {
  while ($row = $result->fetch_assoc()) {
    echo '<p><strong>Employee Number:</strong> ' . $row['eno'] . '</p>';
    echo '<p><strong>Employee Name:</strong> ' . $row['ename'] . '</p>';
    echo '<p><strong>Designation:</strong> ' . $row['designation'] . '</p>';
    echo '<p><strong>Salary:</strong> $' . $row['salary'] . '</p>';
  }
} else {
  echo 'No employee found with name ' . $ename;
}
 
$conn->close();
?>
 
sql:-
 
CREATE TABLE EMP (
  eno INT PRIMARY KEY,
  ename VARCHAR(50),
  designation VARCHAR(50),
  salary DECIMAL(10, 2)
);



//S26.2
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
