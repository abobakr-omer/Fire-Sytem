#include "StdTypes.h"
#include "MOTOR_Int.h"
#include "DIO_Int.h"

const DIO_Pin_t MotorPinsArray[TOTAL_MOTORS][2]={
	
	/*MOTOR          IN_1   IN_2*/
	/*MOTOR_1*/     {PINC0,PINC1}, 
	/*MOTOR_2*/     {PINC2,PINC3},
	/*MOTOR_3*/     {PINC4,PINC5},
	/*MOTOR_4*/     {PINC6,PINC7}
	
};