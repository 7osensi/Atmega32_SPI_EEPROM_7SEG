/*
 * SPI_interface.h
 *
 *  Created on: Apr 13, 2023
 *      Author: Hussein Mohamed
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include "DIO_private.h"

#define SS_PIN		PIN4
#define MOSI_PIN	PIN5
#define MISO_PIN	PIN6
#define SCK_PIN		PIN7


void MSPI_voidIntialize(void);

void MSPI_voidSendData(u8 copy_u8Data);

u8 MSPI_voidRecieveData(void);

#endif /* SPI_INTERFACE_H_ */
