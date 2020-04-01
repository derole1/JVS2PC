#pragma once
#define uint8_t unsigned char

#define JVS_OK					0x01
#define JVS_COIN_OK				0x02
#define JVS_OP_RESET			0xF0
#define JVS_OP_ADDRESS			0xF1
#define JVS_ADDR_BROADCAST		0xFF
#define JVS_SYNC_CODE			0xE0
#define JVS_ESCAPE_CODE         0xD0
#define JVS_NODE1				0x29


struct JVSKEY
{
	int kup_flag;
	int k2up_flag;
	int kdown_flag;
	int k2down_flag;
	int kleft_flag;
	int k2left_flag;
	int kright_flag;
	int k2right_flag;
	int kb1_flag;
	int k2b1_flag;
	int kb2_flag;
	int k2b2_flag;
	int kb3_flag;
	int k2b3_flag;
	int kb4_flag;
	int k2b4_flag;
	int kb5_flag;
	int k2b5_flag;
	int kb6_flag;
	int k2b6_flag;
	int kstart_flag;
	int k2start_flag;
	int ktest_flag;
	int kservice_flag;
	int k2service_flag;
	int kesc_flag;
	
	uint8_t coin[1];
};
