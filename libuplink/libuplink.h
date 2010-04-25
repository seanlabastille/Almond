/*
* Libuplink.h
* Header for libuplink - Communication with the backend
*
*/

#ifndef UPLINK
#define UPLINK 
const uint8 uplink_packet_length = 256;
void uplink_init();
void uplink_get_configuration(uint8 device_id);
void uplink_set_congifuration(uint8 device_id);
void uplink_get_log();
#endif