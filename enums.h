// These drivers are for a US QWERTY keyboard

enum PS2_LED_STATE = {
  LED_STATE_SCRLOCK = 0,
  LED_STATE_NUMLOCK = 1,
  LED_STATE_CAPLOCK = 2,
};

enum PS2_COMMANDS = {
  ECHO = 0xEE, // Check for connectivity

  KB_IDEN = 0xF2, // Get kb info

  // Raw scan codes I guess
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
  PS2_ESCAPE = 0x01,
};
