//S14.1
<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>Teacher Details</title>
  <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
  <script>
    $(document).ready(function() {
      // Bind an event handler to the select element
      $("#teacher-select").change(function() {
        // Get the selected teacher's name
        var tname = $(this).val();
 
        // Send an Ajax request to get the teacher's details
        $.ajax({
          type: "POST",
          url: "get-teacher-details.php",
          data: { tname: tname },
          dataType: "json",
          success: function(data) {
            // Update the details section with the teacher's details
            $("#qualification").text(data.qualification);
            $("#salary").text(data.salary);
          }
        });
      });
    });
  </script>
</head>
<body>
  <h1>Select a Teacher</h1>
  <select id="teacher-select">
    <option value="">-- Select a Teacher --</option>
    <?php
      // Connect to the database
      $conn = new mysqli("localhost", "username", "password", "database");
 
      // Get the list of teachers
      $result = $conn->query("SELECT tname FROM TEACHER");
      while ($row = $result->fetch_assoc()) {
        // Output an option for each teacher
        echo "<option value=\"{$row["tname"]}\">{$row["tname"]}</option>";
      }
 
      // Close the database connection
      $conn->close();
    ?>
  </select>
 
  <h2>Details</h2>
  <p>Qualification: <span id="qualification"></span></p>
  <p>Salary: <span id="salary"></span></p>
</body>
</html>
<?php
  // Connect to the database
  $conn = new mysqli("localhost", "username", "password", "database");
 
  // Get the selected teacher's name
  $tname = $_POST["tname"];
 
  // Query the database for the teacher's details
  $result = $conn->query("SELECT qualification, salary FROM TEACHER WHERE tname = '{$tname}'");
  $row = $result->fetch_assoc();
 
  // Close the database connection
  $conn->close();
 
  // Return the teacher's details as a JSON object
  echo json_encode($row);
?>


//S14.2

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
