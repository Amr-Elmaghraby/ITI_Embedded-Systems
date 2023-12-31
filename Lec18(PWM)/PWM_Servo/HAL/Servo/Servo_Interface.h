/*
 * Servo_Interface.h
 *
 *  Created on: Aug 27, 2023
 *      Author: Hardware
 */

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_


void Servo_VoidInit(void);

void Servo_VoidDegree(u8 Copy_u8Degree);

u16 Servo_u16GetTicks(void);

void Servo_VoidReset(void);

#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
