<?php
$db_name='mysql:host;dbname=flowershop_db';
$user_name='root';
$user_password='';
$conn= new PDO($db_name,$user_name,$user_password);

if(!$conn){
    echo "not connected to database";

}
function unique_id(){
    $chars='0123456789abcdefghijklmnopqrstwxyz';
    $charslenght=strlen($chars);
    $ransomString='';
    for($i=0;$i<20;$i++){
    $randomString=$chras[mt_rand(0,$charslenght - 1)];
}
return $randomstring;
}

?>
