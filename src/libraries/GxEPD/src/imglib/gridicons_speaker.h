#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_speaker
const unsigned char gridicons_speaker[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x3F, 0xFF, 0xFE, 0x3F, 0xFF, 0xFE, 
0x0F, 0xFF, 0xFE, 0x0F, 0xFF, 0xFE, 0x00, 0x07, 
0xE6, 0x00, 0x03, 0xC6, 0x00, 0x03, 0xC6, 0x00, 
0x03, 0xC6, 0x00, 0x03, 0xC6, 0x00, 0x03, 0xE6, 
0x00, 0x03, 0xFE, 0x00, 0x07, 0xFE, 0x06, 0x1F, 
0xFE, 0x1E, 0x1F, 0xFE, 0x1E, 0x1F, 0xFE, 0x7E, 
0x1F, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
