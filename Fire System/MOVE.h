
#ifndef MOVE_H_
#define MOVE_H_

typedef enum{
	F_R,
	F_L,
	B_R,
	B_L
	
	}MOVE_MOTR_t;
	

#define UP_BUTTON    PINB0
#define DOWN_BUTTON  PINB1
#define RIGHT_BUTTON PINB2
#define LEFT_BUTTON  PINB3



void MOVE_Init();
void MOVE_Runnable(void);


#endif /* MOVE_H_ */