<?php
  include("dbSession.php");
  

?>

<html>

<head>
  <title>Register</title>
  <link rel="stylesheet" type="text/css" href="finalStyles.css"/>
</head>

<body>

<h1>Register</h1>
<p>Please fill in this information to create an account.</p>

<form>

<label>Username:</label> <br>
<input type="text" name="user" class="register" required><br>

<label>Password:</label> <br>
<input type="text" name="password" class="register" required><br>

<label>Confirm Password:</label> <br>
<input type="text" name="confirmpass" class="register" required><br>

<input type="submit" name="submit" value="Submit"><br>

<p>Already have an account? <a href="logInPage.php">Click here</a>.</p>

</form>
</body>
</html>
