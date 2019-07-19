<?php
$predictions = simplexml_load_file('http://webservices.nextbus.com/service/publicXMLFeed?command=predictions&a=ttc&s=912&r=196');
echo($predictions->predictions->direction->prediction[0]['seconds']);
?>
