/*
 * DIO_private.h
 *
 *  Created on: Apr 13, 2023
 *      Author: Hussein Mohamed
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/*================== Macros ==================*/
#define GPIO_BASE_ADDRESS	0x30

/*================== Struct ==================*/
typedef struct
{
	volatile u8	PIND;		/* Address: 0x30 */
	volatile u8	DDRD;		/* Address: 0x31 */
	volatile u8	PORTD;		/* Address: 0x32 */

	volatile u8	PINC;		/* Address: 0x33 */
	volatile u8	DDRC;		/* Address: 0x34 */
	volatile u8	PORTC;		/* Address: 0x35 */

	volatile u8	PINB;		/* Address: 0x36 */
	volatile u8	DDRB;		/* Address: 0x37 */
	volatile u8	PORTB;		/* Address: 0x38 */

	volatile u8	PINA;		/* Address: 0x39 */
	volatile u8	DDRA;		/* Address: 0x3A */
	volatile u8	PORTA;		/* Address: 0x3B */
}DIO_t;

#define DIO		((volatile DIO_t *) GPIO_BASE_ADDRESS)

typedef enum
{
	PIN0 = 0,
	PIN1 = 1,
	PIN2 = 2,
	PIN3 = 3,
	PIN4 = 4,
	PIN5 = 5,
	PIN6 = 6,
	PIN7 = 7
}Pins_t;

typedef enum
{
	PORTA = 0,
	PORTB = 1,
	PORTC = 2,
	PORTD = 3,
}Ports_t;

#endif /* DIO_PRIVATE_H_ */
