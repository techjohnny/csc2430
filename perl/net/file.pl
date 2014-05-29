#!/usr/bin/perl

use IO::File; 

$file = new IO::File "/etc/passwd","r"; 


# comments 


while (<$file>) { 
next if /nologin$/; 
chomp; 
print $_,"\n"; 

} 

