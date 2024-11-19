// These drivers are for a US QWERTY keyboard

enum PS2_LED_STATE = {
  LED_STATE_SCRLOCK = 0,
  LED_STATE_NUMLOCK = 1,
  LED_STATE_CAPLOCK = 2,
};

enum PS2_COMMANDS = {
  	ECHO = 0xEE, // Check for connectivity

  	KB_IDEN = 0xF2, // Get kb info

  	// input stuff
	ENABLE_SCAN_CODES = 0xF4,
	DISABLE_SCAN_CODES = 0xF5,

	// Misc
	RESEND_BYTE = 0xFE, 

	// POST
	RESET_STEST = 0xFF,

	// Keyboard config
	SET_LED = 0xED,
	SET_TYPE_RATE = 0xF3,
	SET_SCAN_CODE = 0xF0,
};

enum PS2_KEYS = {
	// ESC key
	PS2_ESCAPE = 0x01,

	// numbers (not numpad)
	PS2_KB1 = 0x02,
	PS2_KB2 = 0x03,
	PS2_KB3 = 0x04,
	PS2_KB4 = 0x05,
	PS2_KB5 = 0x06,
	PS2_KB6 = 0x07,
	PS2_KB7 = 0x08,
	PS2_KB8 = 0x09,
	PS2_KB9 = 0x0A,
	PS2_KB0 = 0x0B,
};
