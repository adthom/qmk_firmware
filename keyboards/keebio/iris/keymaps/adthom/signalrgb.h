#pragma once

#include <stdint.h>
enum qmk_version_bytes
{
    QMK_VERSION_BYTE_1 = 0,
    QMK_VERSION_BYTE_2 = 20,
    QMK_VERSION_BYTE_3 = 7
};

enum signalrgb_commands
{
    GET_QMK_VERSION = 0x21,
    GET_PROTOCOL_VERSION = 0x22,
    GET_UNIQUE_IDENTIFIER = 0x23,
    STREAM_RGB_DATA = 0x24,
    SET_SIGNALRGB_MODE_ENABLE = 0x25,
    SET_SIGNALRGB_MODE_DISABLE = 0x26,
    GET_TOTAL_LEDS = 0x27,
    GET_FIRMWARE_TYPE = 0x28,
};

enum signalrgb_responses //These are a bit clunky right now. Could use improvement.
{
    PROTOCOL_VERSION_BYTE_1 = 1,
    PROTOCOL_VERSION_BYTE_2 = 0,
    PROTOCOL_VERSION_BYTE_3 = 4,
    DEVICE_UNIQUE_IDENTIFIER_BYTE_1 = 6,
    DEVICE_UNIQUE_IDENTIFIER_BYTE_2 = 9,
    DEVICE_UNIQUE_IDENTIFIER_BYTE_3 = 0,
    FIRMWARE_TYPE_BYTE = 1,
    DEVICE_ERROR_LEDS = 255, //Error code to show that there are more leds than a packet will allow.
};

void get_qmk_version(void);
void get_signalrgb_protocol_version(void);
void get_unique_identifier(void);
void led_streaming(uint8_t *data);
void signalrgb_mode_enable(void);
void signalrgb_mode_disable(void);
void get_total_leds(void);
