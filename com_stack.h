/*
 * com_stack.h
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#ifndef COM_STACK_H_
#define COM_STACK_H_
#include "std.h"
#include "com_stack_cfg.h"

/*This type shall be used within the entire AUTOSAR Com Stack of an ECU except for bus drivers. */
//#define PduLengthType uint32

/*Used to store the identifier of a partial network cluster*/
uint8 PNCHandleType;

/*This type is used to store the identifier of a communication channel*/
uint8 NetworkHandleType;

/*Defines the configration ID, defalut ID=0, if ID>0 pretend NETWORKING, more than 1 configration possible*/
uint8 IcomConfigIdType ;

/*Variables of this type shall be used to store the basic information about a PDU of any type*/
struct PduInfoType
{
	uint8 *SduDataPtr;
	uint8 *MetaDataPtr;
};

/*Specify the parameter to which the value has to be changed (BS or STmin)*/
enum TPParameterType
{
	TP_STMIN = 0x00,
	TP_BS = 0x01 ,
	TP_BC = 0x02
};

/*This variables is used store the state of buffer request*/
enum BufReq_retuntype
{
	Bufreq_OK = 0x00,
	BufReq_E_NOT_OK = 0x01,
	BufReq_BUSY = 0x02,
	Bufreq_OVFL = 0x03
};

/*This variables is used to store the state of Tp buffer*/
enum TpDataStatetype
{
	TP_DATACONF = 0x00,
	TP_DATARETRY = 0x01,
	TP_CONFPENDING =0x02
};
/*This variable is used to activation or deactivation of pretend networking when error occurs*/
enum IcomSwitch_ErrorType
{
	ICOM_SWITCH_E_OK = 0x00,
	ICOM_SWITCH_E_FAILED =0x01
};

/*This variable is used to store the info about Tp buffer handling*/
struct RetryInfoType
{
	enum TpDataStatetype TpDataState ;
	//PduLengthType TxTpDataCnt;
	uint32 TxTpDataCnt;
};


#endif /* COM_STACK_H_ */
