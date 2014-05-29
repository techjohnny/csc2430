<?php 

$names=["john","jeff","steve"]; 
$number = [1,2,3,4]; 
echo ("hello world"); 
echo "\n"; 
echo $number[1]; 
$i = 0; 
while ($i < 10) 
{ 
echo $i; 
$i++; 
} 
$i = 0; 
for ($i ; $i < 10; $i++) 
{ 
echo $i, "\n"; 
} 

for ($i=0; $i<3; $i++) { 
echo $names[$i],"\n"; 
} 
if ($names[0] == "john") { 
echo "Your name is John\n"; 
} 
else { echo "Your name is not John!","\n" ; } 
do { 
echo "This will run just once","\n"; 
} 
while ($names[0] == "jeff") ; 
?> 
