/*
* Libuplink.h
* Header for libuplink - Communication with the backend
*
*/

#ifndef UPLINK
#define UPLINK 
	const uint8 uplink_packet_length = 256;
	void uplink_init();
	void uplink_send_configuration(uint8 device_id);
	void uplink_receive_configuration(uint8 device_id);
	void uplink_send_log();
#endif