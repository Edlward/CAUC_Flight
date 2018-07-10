/*
*---------------����"HAL�ײ��"�Ĺ���(CAUC_Flight)--------------
*@file main.c
*@version V1.0
*@date  2018/5/24
*@brief ��������ͷ�ļ�
*@design ���˻��о�С��
	     ̷��   ��ͨ    ��־��   ����Ƽ  ��˶
*
*@all copyright reserved �й��񺽴�ѧ �������о���
*@hardware platform  STM32F40X
*@remark   	We are a team.
*@motto		I just want to know why the BeiJing MTR Line 4 are so many people every day.
*/
#ifndef _DRIVER_LIDARLITE_H_
#define	_DRIVER_LIDARLITE_H_

#include "stm32f4xx.h"

void LIDARLite_begin(u8 configuration, u8 fasti2c, u8 showErrorReporting, u8 LidarLiteI2cAddress);
void LIDARLite_configure(u8 configuration, u8 LidarLiteI2cAddress);
void LIDARLite_beginContinuous(u8 modePinLow, u8 interval, u8 numberOfReadings,u8 LidarLiteI2cAddress);
u16 LIDARLite_distance(u8 stablizePreampFlag, u8 takeReference, u8 LidarLiteI2cAddress);
u16 LIDARLite_distanceContinuous(u8 LidarLiteI2cAddress);
void LIDARLite_scale(u8 velocityScalingValue, u8 LidarLiteI2cAddress);
u8 LIDARLite_velocity(u8 LidarLiteI2cAddress);
u8 LIDARLite_signalStrength(u8 LidarLiteI2cAddress);
void LIDARLite_correlationRecordToArray(int *arrayToSave, u8 numberOfReadings, u8 LidarLiteI2cAddress);
void LIDARLite_correlationRecordToSerial(u8 separator, u8 numberOfReadings, u8 LidarLiteI2cAddress);
u8 LIDARLite_changeAddress(u8 newI2cAddress,  u8 disablePrimaryAddress, u8 currentLidarLiteAddress);
void LIDARLite_changeAddressMultiPwrEn(u8 numOfSensors, int *pinArray, u8 *i2cAddressArray, u8 usePartyLine);//δ��ֲ��Ϊ�о��ò���


#endif

