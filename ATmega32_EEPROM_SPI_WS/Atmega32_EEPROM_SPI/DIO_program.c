/*
 * DIO_prog.c
 *
 *  Created on: Apr 13, 2023
 *      Author: Hussein Mohamed
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"

/*=========================== Start_Function ===========================*/
void MDIO_voidSetPinMode(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinMode)
{
	if(copy_u8PinMode == OUTPUT)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->DDRA |= (1 << copy_u8PinId);	break;
			case GPIOB: DIO->DDRB |= (1 << copy_u8PinId);	break;
			case GPIOC: DIO->DDRC |= (1 << copy_u8PinId);	break;
			case GPIOD: DIO->DDRD |= (1 << copy_u8PinId);	break;
			default:										break;
		}
	}
	else if(copy_u8PinMode == INPUT)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->DDRA &= ~(1 << copy_u8PinId);	break;
			case GPIOB: DIO->DDRB &= ~(1 << copy_u8PinId);	break;
			case GPIOC: DIO->DDRC &= ~(1 << copy_u8PinId);	break;
			case GPIOD: DIO->DDRD &= ~(1 << copy_u8PinId);	break;
			default:										break;
		}
	}
}
/*============================ End_Function ============================*/
/*=========================== Start_Function ===========================*/
void MDIO_voidSetPortMode(u8 copy_u8PortId, u8 copy_u8PortMode)
{
	if(copy_u8PortMode == OUTPUT)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->DDRA = 0xFF;	break;
			case GPIOB: DIO->DDRB = 0xFF;	break;
			case GPIOC: DIO->DDRC = 0xFF;	break;
			case GPIOD: DIO->DDRD = 0xFF;	break;
			default:						break;
		}
	}
	else if(copy_u8PortMode == INPUT)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->DDRA = 0x00;	break;
			case GPIOB: DIO->DDRB = 0x00;	break;
			case GPIOC: DIO->DDRC = 0x00;	break;
			case GPIOD: DIO->DDRD = 0x00;	break;
			default:						break;
		}
	}
}
/*============================ End_Function ============================*/
/*=========================== Start_Function ===========================*/
void MDIO_voidSetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8PinValue)
{
	if(copy_u8PinValue == HIGH)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->PORTA |= (1 << copy_u8PinId);	break;
			case GPIOB: DIO->PORTB |= (1 << copy_u8PinId);	break;
			case GPIOC: DIO->PORTC |= (1 << copy_u8PinId);	break;
			case GPIOD: DIO->PORTD |= (1 << copy_u8PinId);	break;
			default:										break;
		}
	}
	else if(copy_u8PinValue == LOW)
	{
		switch(copy_u8PortId)
		{
			case GPIOA: DIO->PORTA &= ~(1 << copy_u8PinId);	break;
			case GPIOB: DIO->PORTB &= ~(1 << copy_u8PinId);	break;
			case GPIOC: DIO->PORTC &= ~(1 << copy_u8PinId);	break;
			case GPIOD: DIO->PORTD &= ~(1 << copy_u8PinId);	break;
			default:										break;
		}
	}
}
/*============================ End_Function ============================*/
/*=========================== Start_Function ===========================*/
void MDIO_voidSetPortValue(u8 copy_u8PortId , u8 copy_u8Value)
{
	 switch(copy_u8PortId)
	 {
	 	 case GPIOA : DIO->PORTA = copy_u8Value;		break;
	 	 case GPIOB : DIO->PORTB = copy_u8Value;		break;
	 	 case GPIOC : DIO->PORTC = copy_u8Value;		break;
	 	 case GPIOD : DIO->PORTD = copy_u8Value;		break;
	 	 default:										break;
	 }
}
/*============================ End_Function ============================*/
/*=========================== Start_Function ===========================*/
u8 MDIO_u8GetPinValue(u8 copy_u8PortId , u8 copy_u8PinId)
{
	 u8 Local_u8PinValue = 0;
	 switch(copy_u8PortId)
	 {
		 case GPIOA: Local_u8PinValue =  GET_BIT(DIO->PINA, copy_u8PinId);	break;
		 case GPIOB: Local_u8PinValue =  GET_BIT(DIO->PINB,copy_u8PinId); 	break;
		 case GPIOC: Local_u8PinValue =  GET_BIT(DIO->PINC,copy_u8PinId);	break;
		 case GPIOD: Local_u8PinValue =  GET_BIT(DIO->PIND,copy_u8PinId);	break;
		 default: 															break;
	 }
	return Local_u8PinValue;
}
/*============================ End_Function ============================*/
