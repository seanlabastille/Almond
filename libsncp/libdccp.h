/*
* Libdccp.h
* Header for libdccp
*
*/
#define DCCP_TYPE // <--- TYPE SWITCH HERE
enum DCCP_Packet_Type {
	INFO=0x10, INFORET=0x11, GET=0x20, SET=0x21, SLEEP=0x23, RET=0x22, ACK=0x30, ERROR=0x31  };
#ifdef DCCP_MASTER
const uint8 dccp_packet_length = 32;
void dccp_init(uint8[16] *device_name, &sleep_callback); // char?
void dccp_slave_register(uint8 class, &sleep_callback);
void dccp_send_package(DCCP_Packet_Type t, &data, &error);
void dccp_receive_package();
#endif
#ifdef DCCP_SLAVE
void dccp_slave_init(uint8[16] *device_name, &sleep_callback);
void dccp_slave_register_sensor(uint8 class, &sleep_callback);
void dccp_slave_register_actuator(uint8 class, &sleep_callback);
#endif