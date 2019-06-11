/*
 * std.h
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#ifndef STD_H_
#define STD_H_
//standard return type
//#define E_OK	0X00u
//#define E_NOT_OK	0X01u
//#define E_OK	0X00u
#include "plat.h"

/*This type shall be used to request the version of a BSW module using the <Module name>_GetVersionInfo() function. */
struct Std_VersionInfoType
{
	uint16 venderid;
	uint16 moduleid;
	uint8 sw_major_version;
	uint8 sw_minor_version;
	uint8 sw_patch_version;
};

/* the symbol E_OK has to be shared. To avoid name clashes and redefinition problems*/
enum Status
{
	E_OK = 0x00,
	E_NOT_OK = 0x01
};

/*symbols to define High and Low*/
enum low_high_state
{
	STD_LOW = 0x00,
	STD_HIGH = 0x01
};

/*Symbols to define the state*/
enum active_idle_state
{
	STD_IDLE = 0x00,
	STD_ACTIVE = 0x01
};

/*symobls to define the On and OFF condition*/
enum
{
	STD_OFF = 0x00,
	STD_ON = 0x01

};


#endif /* STD_H_ */
