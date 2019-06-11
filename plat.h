/*
 * plat.h
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#ifndef PLAT_H_
#define PLAT_H_

/*for checking true and false condition*/
#define TRUE	0x01
#define FALSE 	0x00

/*According to the register width of the CPU used */
/*#define CPU_TYPE_8	8
#define CPU_TYPE_16	16
#define CPU_TYPE_32	32
#define CPU_TYPE_64	64*/
enum CPU_TYPE
{
	CPU_TYPE_8  = 0x08,
	CPU_TYPE_16 = 0x16,
	CPU_TYPE_32	= 0x32,
	CPU_TYPE_64 = 0x64
};

/*in case of Endian, bit orderning shall be assined*/
#define MSB_FIRST	0x00
#define LSB_FIRST	0x01

/*in case of endian, byte orderring shall be assigned */
#define HIGH_BYTE_FIRST	0x00
#define LOW_BYTE_FIRST	0x01

/*Datatypes are replaced by new names using typedef derived data type*/
typedef unsigned char		boolean;
typedef unsigned char		uint8;
typedef signed char 		sint8;
typedef unsigned short		uint16;
typedef unsigned int  		uint32;
typedef unsigned long long  uint64;
typedef signed char         sint8_least;
typedef unsigned char       uint8_least;
typedef signed short        sint16_least;
typedef unsigned short      uint16_least;
typedef signed long         sint32_least;

#endif /* PLAT_H_ */
