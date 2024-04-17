//S3.1

//save with  s3_1.html


<!DOCTYPE html>
<html>
<head>
    <title>Login Form</title>
</head>
<body>

<h1>Login Form</h1>

<form method="post" action="s3_1.php">
    <label for="username">Username:</label>
    <input type="text" id="username" name="username"><br>

    <label for="password">Password:</label>
    <input type="password" id="password" name="password"><br>

    <input type="submit" value="Submit">
</form>

</body>
</html>

//save this with  s3_1.php


<?php

session_start();

$correct_username = "admin";
$correct_password = "admin";

if (!isset($_SESSION['attempt_count'])) {
    $_SESSION['attempt_count'] = 0;
}

if (isset($_POST['username']) && isset($_POST['password'])) { 

    
    $username = $_POST['username'];
    $password = $_POST['password'];

    
    if ($username == $correct_username && $password == $correct_password) {
        $_SESSION['username'] = $username;
       echo "Welcome $username";
?>
      <html>
<body>
<a href='emp.html'> Click here to enter details of employees </a>
</body>
</html>

<?php
        $_SESSION['attempt_count'] = 0;
    } else { $c=$_SESSION['attempt_count']+1;
        echo "Incorrect username or password. Please try again. Your Attempt=\n".$c;
        $_SESSION['attempt_count']++;
    }
}


if ($_SESSION['attempt_count'] >= 3) {
    echo "Attempt over.\n";
    session_destroy();
}

?>


//S3.2

//


import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
df=pd.read_csv("C:/Users/admin/Desktop/Practical exam/Data Analytics/DA/dataset/User_Data.csv")
df



//

x=df.iloc[:, [2, 3]].values 
y=df.iloc[:, 4].values

//
from sklearn.model_selection import train_test_split

xtrain, xtest, ytrain, ytest= train_test_split(x, y, test_size=0.5, random_state=0)

from sklearn.preprocessing import StandardScaler
sc_x=StandardScaler()
xtrain=sc_x.fit_transform(xtrain) 
xtest=sc_x.transform(xtest)
print (xtrain[0:10, :])

//

from sklearn.linear_model  import LogisticRegression 
classifier=LogisticRegression(random_state=0) 
classifier.fit(xtrain, ytrain)

//

y_pred=classifier.predict(xtest)

//
//


from sklearn.metrics import confusion_matrix 
cm=confusion_matrix(ytest, y_pred) 
print("Confusion Matrix: \n", cm)

//

from sklearn.metrics import accuracy_score
print ("Accuracy: ", accuracy_score (ytest, y_pred))

//

from matplotlib.colors import ListedColormap
X_set, y_set ,xtest, ytest
X1, X2= np.meshgrid (np.arange(start= x_set[:, 0].min() - 1,
                            stop = x_set[:, e].max() + 1, step = 0.01), 
                    np.arange(start = x_set[:, 1].min() - 1,
                            stop = x_set[:, 1].max() + 1, step = 0.01))
plt.contourf(X1, X2, classifier.predict(
             np.array([X1.ravel(), X2.ravel()]).T).reshape(
             X1.shape), alpha = 0.75, cmap= ListedColormap (('pink', 'grey')))

plt.xlim(X1.min(), X1.max()) 
plt.ylim(X2.min(), X2.max())
for i, j in enumerate(np.unique(y_set)):
    plt.scatter(X_set[ y_set == j, 0], X_set[y_set == j, 1],
                 c = ListedColormap (('blue', 'pink'))(1), label = j)
plt.title('Classifier (Test set)')
plt.xlabel('Age')
plt.ylabel('Estimated Salary')
plt.legend()
plt.show()

