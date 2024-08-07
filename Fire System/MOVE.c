#include "StdTypes.h"
#include "DIO_Int.h"
#include "MOTOR_Int.h"
#include "MOVE.h"
#include "MOVE_Private.h"


void MOVE_Init()
{
	
}


void MOVE_Runnable(void)
{
	if (DIO_ReadPin(UP_BUTTON)==LOW)
	{
		forward();
		while(DIO_ReadPin(UP_BUTTON)==LOW);
		stop();
	}

	 if (DIO_ReadPin(DOWN_BUTTON)==LOW)
	{
		backward();
		while(DIO_ReadPin(DOWN_BUTTON)==LOW);
		stop();
	}

	 if (DIO_ReadPin(RIGHT_BUTTON)==LOW)
	{
		rightward();
		while(DIO_ReadPin(RIGHT_BUTTON)==LOW);
		stop();
	}

	 if (DIO_ReadPin(LEFT_BUTTON)==LOW)
	{
		leftward();
		while(DIO_ReadPin(LEFT_BUTTON)==LOW);
		stop();
	}

}

static void forward(void)
{
	MOTOR_CW(F_R);
	MOTOR_CW(F_L);
	MOTOR_CW(B_R);
	MOTOR_CW(B_L);
	
}
static void backward(void)
{
	MOTOR_CCW(F_R);
	MOTOR_CCW(F_L);
	MOTOR_CCW(B_R);
	MOTOR_CCW(B_L);
	
}
static void rightward(void)
{
	MOTOR_CW(F_L);
	MOTOR_CW(B_L);
	MOTOR_CCW(F_R);
	MOTOR_CCW(B_R);
}
static void leftward(void)
{
	MOTOR_CCW(F_L);
	MOTOR_CCW(B_L);
	MOTOR_CW(F_R);
	MOTOR_CW(B_R);
}
static void stop(void)
{
	MOTOR_Stop(F_L);
	MOTOR_Stop(B_L);
	MOTOR_Stop(F_R);
	MOTOR_Stop(B_R);
}