/* File : mgrpc.c */

include "mgrpc.h"
 
 int getSeconds()
 {
	seconds = mgrpc.getseconds();    
	return seconds;
 }