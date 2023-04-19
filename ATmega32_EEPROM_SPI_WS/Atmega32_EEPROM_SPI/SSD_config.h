/*
 * SSD_config.h
 *
 *  Created on: Apr 19, 2023
 *      Author: Hussein Mohamed
 */

#ifndef SSD_CONFIG_H_
#define SSD_CONFIG_H_

#include "DIO_interface.h"
#include "DIO_private.h"

/*
	_a_
  f|_g_|b
  e|_d_|c

*/
#define LED_A	PIN0
#define LED_B	PIN1
#define LED_C	PIN2
#define LED_D	PIN3
#define LED_E	PIN4
#define LED_F	PIN5
#define LED_G	PIN6

#define SSD_PORT	GPIOC


#endif /* SSD_CONFIG_H_ */
