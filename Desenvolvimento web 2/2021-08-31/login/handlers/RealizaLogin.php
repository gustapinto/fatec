<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    session_start();

    if($_POST['username'] == 'orlando' and $_POST['password'] == '123mudar'){
        $_SESSION['loggedin'] = TRUE;
        $_SESSION["username"] = 'Orlando Saraiva';

        header('location: ../views/welcome.php');

        die;
    }

    $_SESSION['loggedin'] = FALSE;

    header('location: ../views/login.php');

    die;
}
