#pragma once
#include "mbed_config.h"
#include <stdint.h>
#include <macros.h>

#ifndef __PINS_ARDUINO__
#define __PINS_ARDUINO__

// Frequency of the board main oscillator
#define VARIANT_MAINOSC (32768ul)

// Master clock frequency
#define VARIANT_MCK     (64000000ul)

// Pins
// ----

// Number of pins defined in PinDescription array
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (80u)
#define NUM_ANALOG_INPUTS    (16u)
#define NUM_ANALOG_OUTPUTS   (0u)

#define PINNAME_TO_PIN(port, pin) ((port - 'A') * 16 + pin)

// LEDs
// ----

// Analog pins
// -----------
static const uint8_t A0  = 80;
static const uint8_t A1  = 81;
static const uint8_t A2  = 82;
static const uint8_t A3  = 83;
static const uint8_t A4  = 84;
static const uint8_t A5  = 85;
static const uint8_t A6  = 86;
static const uint8_t A7  = 87;
static const uint8_t A8  = 88;
static const uint8_t A9  = 89;
static const uint8_t A10 = 90;
static const uint8_t A11 = 91;
static const uint8_t A12 = 92;
static const uint8_t A13 = 93;
static const uint8_t A14 = 94;
static const uint8_t A15 = 95;
#define ADC_RESOLUTION 12

/*
 * Serial interfaces
 */
// Serial (EDBG)
#define PIN_SERIAL_RX PINNAME_TO_PIN('B', 7)
#define PIN_SERIAL_TX PINNAME_TO_PIN('B', 6)

// SPI
#define PIN_SPI_SS    PINNAME_TO_PIN('D', 0)
#define PIN_SPI_MOSI  PINNAME_TO_PIN('C', 12)
#define PIN_SPI_MISO  PINNAME_TO_PIN('C', 11)
#define PIN_SPI_SCK   PINNAME_TO_PIN('C', 10)

static const uint8_t SS   = PIN_SPI_SS;   // SPI Slave SS not used. Set here only for reference.
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

// Wire
#define PIN_WIRE_SDA        PINNAME_TO_PIN('B', 9)
#define PIN_WIRE_SCL        PINNAME_TO_PIN('B', 8)

// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_USBVIRTUAL      SerialUSB
#define SERIAL_PORT_MONITOR         SerialUSB
#define SERIAL_PORT_HARDWARE        Serial1
#define SERIAL_PORT_HARDWARE_OPEN   Serial1


// Mbed specific defines
#define SERIAL_HOWMANY		1
#define SERIAL1_TX			(digitalPinToPinName(PIN_SERIAL_TX))
#define SERIAL1_RX			(digitalPinToPinName(PIN_SERIAL_RX))

//#define SERIAL_CDC			1
#define HAS_UNIQUE_ISERIAL_DESCRIPTOR
#define BOARD_VENDORID		0x2341
#define BOARD_PRODUCTID		0x805a
#define BOARD_NAME			"Nano 33 BLE"

#define DFU_MAGIC_SERIAL_ONLY_RESET   0xb0

#define I2C_SDA				(digitalPinToPinName(PIN_WIRE_SDA))
#define I2C_SCL				(digitalPinToPinName(PIN_WIRE_SCL))

#define SPI_MISO			(digitalPinToPinName(PIN_SPI_MISO))
#define SPI_MOSI			(digitalPinToPinName(PIN_SPI_MOSI))
#define SPI_SCK				(digitalPinToPinName(PIN_SPI_SCK))

#define digitalPinToPort(P)		(digitalPinToPinName(P)/32)

uint8_t getUniqueSerialNumber(uint8_t* name);
void _ontouch1200bps_();

#endif //__PINS_ARDUINO__
