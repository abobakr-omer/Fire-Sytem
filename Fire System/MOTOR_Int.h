

#ifndef MOTOR_INT_H_
#define MOTOR_INT_H_




typedef enum{
	M1,
	M2,
	M3,
	M4,
	TOTAL_MOTORS
	
	}MOTOR_t;


void MOTOR_Init();

void MOTOR_CW(MOTOR_t motor);
void MOTOR_CCW(MOTOR_t motor);
void MOTOR_Stop(MOTOR_t motor);

/************************************************MotorPinsArray[][] OPtimization **********/





#endif /* MOTOR_INT_H_ */