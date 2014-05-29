#!/usr/bin/perl

use IO::Socket; 
$number = 0; 
for ($host =0; $host < 254; $host++) { 
while ($number < 80) { 
$host++;
$number++; 
$scanner = 
IO::Socket::INET->new(PeerPort=>$number, PeerAddr=>'192.168.2.1',Proto=>tcp); 
if ($scanner) 
{
 print "Port $number is alive!","\n"; 
	} 
		} 
			} ; 





