#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"
#include "String.h"
#include "DIO_Int.h"
#include "MOTOR_Int.h"
#include "LCD_Int.h"
#include "MOVE.h"
#include "KeyPad_Int.h"
#include "ADC_Int.h"
#include "Sensors_Int.h"

#define F_CPU  8000000
#include <util/delay.h>




int main(void)
{
	DIO_Init();
	MOTOR_Init();
	MOVE_Init();
	LCD_Init();
	KEYPAD_Init();
	ADC_Init(VREF_VCC,ADC_SCALER_64);
	
	
	u16 temp,smoke,T=50;
	u8 flag=0,flag2=0,num=0,c=0,lcd=0,c2=0;
	u8 k;
	c8 pattern_0[]={0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f};
	LCD_CreateChar(pattern_0,0);
	
	LCD_WriteString("    ABO BAKR");
	LCD_SetCursor(2,1);
	LCD_WriteString("   FIRE SYSTEM");
	_delay_ms(4000);
	LCD_Clear();
	
	while (1)
	{
		temp=SENSORS_ReadTemp();
		smoke=SENSORS_ReadSmoke();
		if (temp<T&&flag==0)
		{
			DIO_WritePin(PINC2,LOW); // LED BLUE
			
			LCD_SetCursor(1,3);
			LCD_WriteString("System Fine");
			
			LCD_SetCursor(2,1);
			LCD_WriteString("T:");
			LCD_WriteNumber(temp);
			LCD_SetCursor(2,5);
			LCD_WriteChar('%');
			
			LCD_SetCursor(2,8);
			LCD_WriteString("SK:");
			LCD_WriteNumber(smoke);
			LCD_SetCursor(2,13);
			LCD_WriteChar('%');
		}
		if (temp>T&&flag==0)
		{
			DIO_WritePin(PINC2,HIGH); // LED BLUE
			
			LCD_SetCursor(1,3);
			LCD_WriteString("System Heat");
			
			LCD_SetCursor(2,1);
			LCD_WriteString("T:");
			LCD_WriteNumber(temp);
			LCD_SetCursor(2,5);
			LCD_WriteChar('%');
			
			LCD_SetCursor(2,8);
			LCD_WriteString("SK:");
			LCD_WriteNumber(smoke);
			LCD_SetCursor(2,13);
			LCD_WriteChar('%');
			T=46;
		}
		if (temp>50&&smoke>60)
		{
			MOTOR_CW(M4);
			DIO_WritePin(PINC2,LOW); // LED BLUE
			DIO_WritePin(PINC0,HIGH); // LED RED
			DIO_WritePin(PINC5,HIGH); // BUZZER
			
			flag=1;
			LCD_SetCursor(1,3);
			LCD_WriteString("System Fire");
			
			LCD_SetCursor(2,1);
			LCD_WriteString("SW 1 To Reset");
			while(1)
			{
				
				k=KEYPAD_GetKey();
				if (k!=NO_KEY)
				{
					
					if (k=='1'&&flag2==0)
					{
						LCD_Clear();
												
						LCD_SetCursor(1,3);
						LCD_WriteString("System Fire");
						
						LCD_SetCursor(2,1);
						LCD_WriteString("Password:");
						LCD_SetCursor(2,10);
						flag2=1;
					}
					else if (k>='1'&&k<='9'&&flag2==1)
					{
						
						LCD_SetCursor(2,10+c);
						LCD_WriteChar('*');
						num=num*10+k-'0';
						c++;
						if (c==3)
						{
							if (num==123)
							{
								MOTOR_Stop(M4);
								DIO_WritePin(PINC2,LOW); // LED BLUE
								DIO_WritePin(PINC0,LOW); // LED RED
								DIO_WritePin(PINC5,LOW); // BUZZER
								flag=0;
								flag2=0;
								c=0;
								LCD_Clear();
								LCD_WriteString(" RESET LOADING");
								for(c2=0;c2<16;c2++)
								{
									LCD_SetCursor(2,1+c2);
									LCD_WriteChar(0);
									_delay_ms(188);
								}
								
								LCD_Clear();
								break;
								
								
							}
							else
							{
								LCD_Clear();
								LCD_WriteString(" Password Wrong");
								_delay_ms(2000);
								LCD_Clear();
								
								LCD_SetCursor(1,3);
								LCD_WriteString("System Fire");
								LCD_SetCursor(2,1);
								LCD_WriteString("Password:");
								LCD_SetCursor(2,10);
								num=0;
								c=0;
							}
						}
						
					}
				}
			}
			
		}
		
		
		
	}
	
}



