#!/bin/perl

$number1=5;
$number2=10;

sub addnumbers($number1,$number2) 
{ 
print $numbertotal=$number1+$number2; 
} 

&addnumbers(); 

sub printme { 
print "Hello world","\n"; 
} 

printme(); 
