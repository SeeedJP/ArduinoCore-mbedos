#include "Arduino.h"

PinDescription g_APinDescription[] = {
	PA_0 , NULL, NULL,	// D0 - USART2_CTS
	PA_1 , NULL, NULL,	// D1 - USART2_RTS
	PA_2 , NULL, NULL,	// D2 - USART2_TX
	PA_3 , NULL, NULL,	// D3 - USART2_RX
	PA_4 , NULL, NULL,	// D4 - A4
	PA_5 , NULL, NULL,	// D5 - A5
	PA_6 , NULL, NULL,	// D6 - A6
	PA_7 , NULL, NULL,	// D7 - A7
	PA_8 , NULL, NULL,	// D8
	PA_9 , NULL, NULL,	// D9
	PA_10, NULL, NULL,	// D10
	PA_11, NULL, NULL,	// D11
	PA_12, NULL, NULL,	// D12
	NC   , NULL, NULL,	// D13 - SWDIO
	NC   , NULL, NULL,	// D14 - SWCLK
	PA_15, NULL, NULL,	// D15 - SD_POWR

	PB_0 , NULL, NULL,	// D16 - BAT_C
	PB_1 , NULL, NULL,	// D17 - LED_RGB
	PB_2 , NULL, NULL,	// D18 - BOOT1
	PB_3 , NULL, NULL,	// D19 - D19
	PB_4 , NULL, NULL,	// D20 - D20
	PB_5 , NULL, NULL,	// D21 - PWRKEY_MODULE
	PB_6 , NULL, NULL,	// D22 - USART1_TX
	PB_7 , NULL, NULL,	// D23 - USART1_RX
	PB_8 , NULL, NULL,	// D24 - I2C1_SCL
	PB_9 , NULL, NULL,	// D25 - I2C1_SDA
	PB_10, NULL, NULL,	// D26 - GRO_POWR
	PB_11, NULL, NULL,	// D27
	PB_12, NULL, NULL,	// D28
	PB_13, NULL, NULL,	// D29
	PB_14, NULL, NULL,	// D30
	PB_15, NULL, NULL,	// D31 - STATUS

	PC_0 , NULL, NULL,	// D32
	PC_1 , NULL, NULL,	// D33
	PC_2 , NULL, NULL,	// D34
	PC_3 , NULL, NULL,	// D35
	PC_4 , NULL, NULL,	// D36
	PC_5 , NULL, NULL,	// D37 - DTR_MODULE
	PC_6 , NULL, NULL,	// D38 - D38
	PC_7 , NULL, NULL,	// D39 - D39
	PC_8 , NULL, NULL,	// D40
	PC_9 , NULL, NULL,	// D41
	PC_10, NULL, NULL,	// D42 - SD_SCK
	PC_11, NULL, NULL,	// D43 - SD_MISO
	PC_12, NULL, NULL,	// D44 - SD_MOSI
	PC_13, NULL, NULL,	// D45
	PC_14, NULL, NULL,	// D46 - OSC32_IN
	PC_15, NULL, NULL,	// D47 - OSC32_OUT

	PD_0 , NULL, NULL,	// D48 - SD_CS
	PD_1 , NULL, NULL,	// D49
	PD_2 , NULL, NULL,	// D50
	PD_3 , NULL, NULL,	// D51
	PD_4 , NULL, NULL,	// D52
	PD_5 , NULL, NULL,	// D53 - RESET_MODULE
	PD_6 , NULL, NULL,	// D54
	PD_7 , NULL, NULL,	// D55
	PD_8 , NULL, NULL,	// D56 - DB_TX
	PD_9 , NULL, NULL,	// D57 - DB_RX
	PD_10, NULL, NULL,	// D58
	PD_11, NULL, NULL,	// D59
	PD_12, NULL, NULL,	// D60
	PD_13, NULL, NULL,	// D61
	PD_14, NULL, NULL,	// D62
	PD_15, NULL, NULL,	// D63

	PE_0 , NULL, NULL,	// D64 - ANT_POWR
	PE_1 , NULL, NULL,	// D65
	PE_2 , NULL, NULL,	// D66
	PE_3 , NULL, NULL,	// D67
	PE_4 , NULL, NULL,	// D68
	PE_5 , NULL, NULL,	// D69
	PE_6 , NULL, NULL,	// D70
	PE_7 , NULL, NULL,	// D71
	PE_8 , NULL, NULL,	// D72 - RGB_POWR
	PE_9 , NULL, NULL,	// D73 - M_POWER
	PE_10, NULL, NULL,	// D74
	PE_11, NULL, NULL,	// D75
	PE_12, NULL, NULL,	// D76
	PE_13, NULL, NULL,	// D77
	PE_14, NULL, NULL,	// D78
	PE_15, NULL, NULL,	// D79

	PA_0 , NULL, NULL,	// A0
	PA_1 , NULL, NULL,	// A1
	PA_2 , NULL, NULL,	// A2
	PA_3 , NULL, NULL,	// A3
	PA_4 , NULL, NULL,	// A4
	PA_5 , NULL, NULL,	// A5
	PA_6 , NULL, NULL,	// A6
	PA_7 , NULL, NULL,	// A7
	PB_0 , NULL, NULL,	// A8
	PB_1 , NULL, NULL,	// A9
	PC_0 , NULL, NULL,	// A10
	PC_1 , NULL, NULL,	// A11
	PC_2 , NULL, NULL,	// A12
	PC_3 , NULL, NULL,	// A13
	PC_4 , NULL, NULL,	// A14
	PC_5 , NULL, NULL,	// A15
};

extern "C" {
  unsigned int PINCOUNT_fn() {
    return (sizeof(g_APinDescription) / sizeof(g_APinDescription[0]));
  }
}

//#ifdef SERIAL_CDC

uint8_t getUniqueSerialNumber(uint8_t* name) {
	return 0;
}

void _ontouch1200bps_() {
}

//#endif
