<?php
  $servername = "localhost";
  $username = "tdhammond";
  $password = "Wiedzmin123@";
  $db = "tdhammond_db";
  // Create connection
  $conn = mysqli_connect($servername, $username, $password,$db);
  // Check connection
  if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
  }
?>