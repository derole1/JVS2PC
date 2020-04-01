/*
Change hex vaule to key scancode of your liking
scan codes can be found here
http://www.ionicwind.com/guides/emergence/appendix_a.htm

without editing cjvs.cpp arrow keys will only work as pure keys for player 1 direction control.
*/

// PLAYER 1

#define P1_UP		0xC8
#define P1_DOWN		0xD0
#define P1_LEFT		0xCB
#define P1_RIGHT	0xCD
#define P1_START	0x1C
#define P1_BTN1		0x2A
#define P1_BTN2		0x2C
#define P1_BTN3		0x2D
#define P1_BTN4		0x21
#define P1_BTN5		0x22
#define P1_BTN6		0x23



// PLAYER 2

#define P2_UP		0x11
#define P2_DOWN		0x1F
#define P2_LEFT		0x1E
#define P2_RIGHT	0x20
#define P2_START	0x39
#define P2_BTN1		0x2E
#define P2_BTN2		0x2F
#define P2_BTN3		0x30
#define P2_BTN4		0x24
#define P2_BTN5		0x25
#define P2_BTN6		0x26

// SYSTEM
#define S_COIN1		0x02
#define S_COIN2		0x02
#define S_TEST		0x03
#define S_SERVICE1	0x04
#define S_SERVICE2  0x05
#define S_ESC		0xFF