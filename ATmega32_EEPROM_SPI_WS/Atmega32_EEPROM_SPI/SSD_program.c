/*
 * SevenSegment_program.c
 *
 *  Created on: Apr 19, 2023
 *      Author: Hussein Mohamed
 */

#include "DIO_interface.h"
#include "DIO_private.h"
#include "SSD_interface.h"
#include "SSD_config.h"

void HSSD_voidSSDInit(void)
{
	MDIO_voidSetPortMode(SSD_PORT, OUTPUT);
}
void HSSD_voidOneSevenSegment(u8 copy_u8Num)
{
	switch(copy_u8Num)
	{
		case 0x3F: /* 0 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, LOW);
			break;
		case 0x06: /* 1 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, LOW);
			break;
		case 0x5B: /* 2 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x4F: /* 3 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x66: /* 4 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x6D: /* 5 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x7D: /* 6 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x07: /* 7 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, LOW);
			break;
		case 0x7F: /* 8 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0x67: /* 9 */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
		case 0xFF: /* E */ /* EMPTY */
			MDIO_voidSetPinValue(SSD_PORT, LED_A, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_B, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_C, LOW);
			MDIO_voidSetPinValue(SSD_PORT, LED_D, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_E, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_F, HIGH);
			MDIO_voidSetPinValue(SSD_PORT, LED_G, HIGH);
			break;
	}
}
