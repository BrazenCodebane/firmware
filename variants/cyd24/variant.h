#ifndef cyd24_H
#define cyd24_H

#include <LovyanGFX.hpp>

// display section
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240
#define FONT_SIZE 2

#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0
#define TFT_OFFSET_ROTATION 0
#define SCREEN_ROTATE
#define SCREEN_TRANSITION_FRAMERATE 5

#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 16000000
#define SPI_TOUCH_FREQUENCY = 2500000
#define TFT_CS ILI9341_SPI_CONFIG_CS_GPIO_NUM
#define TFT_MOSI ILI9341_SPI_BUS_MOSI_IO_NUM
#define TFT_MISO ILI9341_SPI_BUS_MISO_IO_NUM
#define TFT_SCLK ILI9341_SPI_BUS_SCLK_IO_NUM
#define TFT_DC ILI9341_SPI_CONFIG_DC_GPIO_NUM
#define TFT_BL GPIO_BCKL
#define TFT_RST ILI9341_DEV_CONFIG_RESET_GPIO_NUM
#define TFT_BUSY -1
#define I2C_SDA CST816S_I2C_CONFIG_SDA_IO_NUM // I2C pins for this board
#define I2C_SCL CST816S_I2C_CONFIG_SCL_IO_NUM
// #define HAS_TOUCHSCREEN 1
// #define SCREEN_TOUCH_INT 16
// #define USE_CST816S

//  #define TOUCH_I2C_PORT  //TODO:
//  #define TOUCH_SLAVE_ADDRESS 0x5D  //TODO:test and check

// LoRa Section
#define LORA_RX 35 // TODO: pinout
#define LORA_TX 22 // TODO: pinout
#define LORA_RST 21

#endif /*cyd24_H*/