/*
* Core libraries for squirrel
*/

#include libsncp.h
#include libuplink.h

#define SNCP_MASTER // We're on the Squirrel here, so we'll be operating SNCP in Master mode

#ifndef SQUIRREL
#define SQUIRREL
	void squirrel_init(); // Initialize, check for known devices, scan for new devices, start polling/accept pushed messages, output to display, respond to backend requests, log activity
	void __bluetooth_init();
	
#endif