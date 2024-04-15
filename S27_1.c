//S27.1
  <!DOCTYPE html>
<html>
<head>
    <title>Voter Registration</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
    <script src=>
        $(document).ready(function(){
    $("#voter-form").submit(function(event){
        event.preventDefault();
        var name = $("#name").val();
        var age = $("#age").val();
        var nationality = $("#nationality").val();
        if(validateForm(name, age, nationality)){
            $.ajax({
                url: "submit.php",
                type: "POST",
                data: {
                    name: name,
                    age: age,
                    nationality: nationality
                },
                success: function(data){
                    $("#result").html(data);
                }
            });
        }
    });
 
    function validateForm(name, age, nationality){
        if(name == "" || age == "" || nationality == ""){
            alert("All fields are required!");
            return false;
        }
        if(!/^[A-Z]+$/.test(name)){
            alert("Name should be in uppercase letters only!");
            return false;
        }
        if(age < 18){
            alert("Age should not be less than 18 years!");
            return false;
        }
        if(nationality.toLowerCase() != "indian"){
            alert("Nationality should be Indian!");
            return false;
        }
        return true;
    }
});
 
    </script>
</head>
<body>
    <h1>Voter Registration</h1>
    <form id="voter-form" method="post">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name"><br>
 
        <label for="age">Age:</label>
        <input type="number" id="age" name="age"><br>
 
        <label for="nationality">Nationality:</label>
        <input type="text" id="nationality" name="nationality"><br>
 
        <input type="submit" value="Submit">
    </form>
    <div id="result"></div>
</body>
 
<?php
    $name = $_POST['name'];
    $age = $_POST['age'];
    $nationality = $_POST['nationality'];
 
    // Here you can write code to store the data in a database or perform any other action you want.
 
    echo "Thank you for registering, $name!";
?>
</html>