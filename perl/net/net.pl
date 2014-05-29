#!/usr/bin/perl

use Net::IP; 

$ip = Net::IP->new('192.168.2.2'); 

print $ip->ip(),"\n"; 
