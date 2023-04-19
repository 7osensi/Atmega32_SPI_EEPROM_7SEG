/*
 * SPI_private.h
 *
 *  Created on: Apr 13, 2023
 *      Author: Hussein Mohamed
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

typedef struct
{
	volatile u8 SPCR;
	volatile u8 SPSR;
	volatile u8 SPDR;

}SPI_t;

#define SPI ((volatile SPI_t *)(0x2D))

#endif /* SPI_PRIVATE_H_ */
