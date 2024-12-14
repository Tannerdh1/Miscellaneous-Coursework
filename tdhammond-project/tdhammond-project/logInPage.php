<?php

  require_once "dbSession.php";
  if ($_SERVER["REQUEST_METHOD"] == "POST")
  {
     $inputUsername = mysqli_real_escape_string($dbname, $_POST['user']);
     $inputPassword = mysqli_real_escape_string($dbname, $_POST['password']);
     $sql = "Select User_ID from Users where Username = $inputerUsername and Password = $inputPassword";
     $result = mysqli_query($db,$sql);
     $row = mysqli_fetch_array($result, MYSQLI_ASSOC);
     $count = mysqli_num_rows($result);

     if($count == 1){
      session_register("Username");
      $_SESSION['login_user'] = $inputUsername;
      header("location: studentData.php");
     }
     else{
	$error = "Your Login Name or Password is invalid";
     }
  }
?>
<html>

<head>

  <link rel="stylesheet" type="text/css" href="finalStyles.css"/>

</head>

<body>

  <h1>Log In</h1>

  <pre>

    <form>
	<label for="user">Username:</label><br>
	<input type="text" id="user" name="user" required><br>
	<label for="password">Password:</label><br>
	<input type="text" id="password" name="password" required><br>
	<input type="submit" name="login" value="Login"><br>
	<p><a href="register.php"> Click here to create an account.</a></p>
    </form>
   </pre>

</body>

</html>
