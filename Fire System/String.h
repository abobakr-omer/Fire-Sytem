/*
 * String.h
 *
 * Created: 10/24/2023 3:29:28 AM
 *  Author: User
 */ 


#ifndef STRING_H_
#define STRING_H_

void string_print(char*str);
int string_len(char*str);
void string_reverse(char*str);
void string_UpperToLower(char*str);
int string_compare(char*s1,char*s2);
int string_compareNotSensitive(char*s1,char*s2);
void string_even_Word(char*str,char*word);
void string_IntToString(int num,char*str);
int string_StringToInt(char*str);
void string_copy(char*arr1,char*arr2);
char string_firstRepeatedChar(char*str);
void string_copyWithoutRepeatedChar(char*str,char*copy);
int string_compareNotSensitive2(char*s1,char*s2);
int string_compare2(char*s1,char*s2);





#endif /* STRING_H_ */