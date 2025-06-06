/*
 * hts221.h
 *
 *  Created on: Apr 26, 2025
 *      Author: ghass
 */

#ifndef INC_HTS221_H_
#define INC_HTS221_H_

#include <stdint.h>

#define HTS221_IDENTIFIER	0xBC
#define HTS221_SLAVE_ADDR	0x5F


// HTS221 registers
#define WHO_AM_I_OFFSET				0x0F
#define CTRL_REG1_OFFSET			0x20
#define CTRL_REG2_OFFSET			0x21
#define CTRL_REG3_OFFSET			0x22
#define STATUS_REG_OFFSET			0x27
#define HUMIDITY_OUT_L_OFFSET		0x28
#define HUMIDITY_OUT_H_OFFSET		0x29
#define TEMP_OUT_L_OFFSET			0x2A
#define TEMP_OUT_H_OFFSET			0x2B

// HTS221 APIs
uint8_t hts221_read_register(uint8_t reg);
void hts221_write_register(uint8_t reg, uint8_t value);

uint16_t hts221_read_temp_register();
uint16_t hts221_read_humd_register();

void hts221_init();

#endif /* INC_HTS221_H_ */
