/*
 * StdTypes.h
 *
 * Created: 10/9/2023 12:26:06 AM
 *  Author: User
 */ 


#ifndef STDTYPES_H_
#define STDTYPES_H_

typedef union{
	struct{
		unsigned char b1:1;
		unsigned char b2:1;
		unsigned char b3:1;
		unsigned char b4:1;
		unsigned char b5:1;
		unsigned char b6:1;
		unsigned char b7:1;
		unsigned char b8:1;
		};
		unsigned char reg;
	}reg_t;

typedef unsigned char   u8;
typedef signed char     s8;
typedef    char         c8;

typedef unsigned int    u16;
typedef signed int      s16;

typedef unsigned long   u32;
typedef signed long     s32;

typedef enum{
	FALSE=0X55,  //0b01010101
	TRUE=0XAA   //0b10101010
	}bool_t;

#define  NULLPTR     ((void*)0)

typedef enum{
	OK,                   //Make OK=0 because any error except (OK) doesn't equal 0
	NOK,
	NULL_PTR,
	OUT_OF_RANG,          // IF YOU PASS an element out of array
	BUSY
	}error_t;
	
#define  MAX_U8    ((u8)255) //Range of
#define  MIN_U8    ((u8)0)   //         unsigned char
#define  MAX_S8    ((s8)127)
#define  MIN_S8    ((s8)-128)
#define  ZERO_S8   ((s8)0)


#define  MAX_U16    ((u16)65535)
#define  MIN_U16    ((u16)0)
#define  MAX_S16    ((s16)32767)
#define  MIN_S16    ((s16)-32768)
#define  ZERO_S16   ((s16)0)


#define  MAX_U32    ((u32)4294967295)
#define  MIN_U32    ((u32)0)
#define  MAX_S32    ((s32)2147483647)
#define  MIN_S32    ((s32)-2147483648)
#define  ZERO_S32   ((s32)0)






#endif /* STDTYPES_H_ */