/*
 * main.c
 *
 *  Created on: Apr 17, 2023
 *      Author: Hussein Mohamed
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "SPI_interface.h"
#include "EEPROM_interface.h"
#include "SSD_interface.h"

int main()
{
	u8 Local_u8represent;
	/* Initialize SSD */
	HSSD_voidSSDInit();
	/* Initialize SPI */
	MSPI_voidIntialize();
	_delay_ms(5);
	/* Read first address */
	Local_u8represent = HEEPROM_u8ReadData(0x00);

	/* EEPROM is empty when 0xFF is stored */
	if(Local_u8represent == 0xFF)
	{
		/* Hex representation for segments
		 * 0x3F : 0
		 * 0x06 : 1
		 * 0x5B : 2
		 * 0x4F : 3
		 * 0x66 : 4
		 * 0x6D : 5
		 * 0x7D : 6
		 * 0x07 : 7
		 * 0x7F : 8
		 * 0X67 : 9 */
		u8 arr1[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67};
		HEEPROM_voidSend10Bytes(0x00, arr1);
	}
	else
	{
		u8 arr2[10] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
		HEEPROM_voidSend10Bytes(0x00, arr2);
	}

	while(1)
	{
		for(u8 local_u8Counter  = 0; local_u8Counter <= 9; local_u8Counter++)
		{
			/* Read the address to get the data */
			Local_u8represent = HEEPROM_u8ReadData(0x00 + local_u8Counter);
			/* Show the data on the SSD */
			HSSD_voidOneSevenSegment(Local_u8represent);
			_delay_ms(100);
		}
	}
	return 0;
}