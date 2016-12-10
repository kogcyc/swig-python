/* File : example.c */

include "mgrpc.h"
 
 int getSeconds()
 {
	seconds = mgrpc.getseconds();    
	return seconds;
 }