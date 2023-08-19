
#ifndef SERVO_MOTOR_SERVO_MOTOR_H_
#define SERVO_MOTOR_SERVO_MOTOR_H_

#include "MGPIO_int.h"
#include "STK_int.h"

#define SERVO_UP		0
#define SERVO_DOWN		1


void Servo1_Entry_Gate_Init(void);
void Servo1_Entry_Gate(u8 Direction);

void Servo2_Exit_Gate_Init(void);
void Servo2_Exit_Gate(u8 Direction);





#endif /* SERVO_MOTOR_SERVO_MOTOR_H_ */
