<?php
$host = 'localhost'; // Change as needed
$db = 'flower_shop';
$user = 'root'; // Change as needed


try {
    $pdo = new PDO("mysql:host=$host;dbname=$db", $user, $pass);
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    echo "Connection failed: " . $e->getMessage();
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = htmlspecialchars($_POST['name']);
    $email = htmlspecialchars($_POST['email']);
    $message = htmlspecialchars($_POST['message']);

    // Here, you can send an email or save the message to the database
    // For demonstration, we'll just echo the message
    echo "Thank you, $name! Your message has been sent.";
}
?>
