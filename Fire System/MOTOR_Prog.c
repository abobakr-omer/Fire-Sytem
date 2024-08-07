
#include "StdTypes.h"
#include "DIO_Int.h"
#include "MOTOR_Int.h"
#include "MOTOR_Cfg.h"
#include "MOTOR_Private.h"

void MOTOR_Init(void)
{
	//do nothing
}

// void MOTOR_CW(MOTOR_t motor)
// {
// 	switch(motor)
// 	{
// 		case M1:
// 		DIO_WritePin(M1_IN1,HIGH);
// 		DIO_WritePin(M1_IN2,LOW);
// 		break;
// 		case M2:
// 		DIO_WritePin(M2_IN1,HIGH);
// 		DIO_WritePin(M2_IN2,LOW);
// 		break;
// 		
// 	}
// 	
// 	
// }
// void MOTOR_CCW(MOTOR_t motor)
// {
// 	switch(motor)
// 	{
// 		case M1:
// 		DIO_WritePin(M1_IN1,LOW);
// 		DIO_WritePin(M1_IN2,HIGH);
// 		break;
// 		case M2:
// 		DIO_WritePin(M2_IN1,LOW);
// 		DIO_WritePin(M2_IN2,HIGH);
// 		break;
// 		
// 	}
// }
// 
// 
// void MOTOR_Stop(MOTOR_t motor)
// {
// 	switch(motor)
// 	{
// 		case M1:
// 		DIO_WritePin(M1_IN1,LOW);
// 		DIO_WritePin(M1_IN2,LOW);
// 		break;
// 		case M2:
// 		DIO_WritePin(M2_IN1,LOW);
// 		DIO_WritePin(M2_IN2,LOW);
// 		break;
// 		
// 	}
// }
/************************************************MotorPinsArray[][] **********/
void MOTOR_CW(MOTOR_t motor)
{
	
	DIO_WritePin(MotorPinsArray[motor][IN_1],HIGH);
	DIO_WritePin(MotorPinsArray[motor][IN_2],LOW);
	
	
}
void MOTOR_CCW(MOTOR_t motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN_1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN_2],HIGH);
}


void MOTOR_Stop(MOTOR_t motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN_1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN_2],LOW);
}
