


#include "StdTypes.h"
#include <stdio.h>
#include <stdlib.h>
#include "String.h"

void string_print(char*str)
{
	int i;
	for(i=0; str[i]; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
int string_len(char*str)
{
	int i;
	for(i=0; str[i]; i++)
	{

	}
	return i;
}
void string_reverse(char*str)
{
	int i,j=string_len(str)-1;
	char temp;
	for(i=0; i<j; i++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		j--;
	}
}

void string_UpperToLower(char*str)
{
	int i;
	for(i=0; str[i]; i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]-'A'+'a';
		}
	}
}
int string_compare(char*s1,char*s2)
{
	int i;
	for(i=0; s1[i]||s2[i];)
	{
		if(s1[i]==s2[i])
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int string_compareNotSensitive(char*s1,char*s2)
{
	int i;
	for(i=0; s1[i]||s2[i];)
	{
		if((s1[i]-s2[i])==('a'-'A')||(s1[i]-s2[i])==-('a'-'A')||s1[i]==s2[i])
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
void string_even_Word(char*str,char*word)
{
	int i,j,c=0,max_word=0,index_longest_word;
	for(i=0; str[i]; i++)
	{
		if(str[i]==' ')
		{
			if(max_word<c&&c%2==0)
			{
				max_word=c;
				index_longest_word=i-max_word;
			}

			c=0;
		}
		else
		{
			c++;
		}
	}
	if(max_word<c&&c%2==0)
	{
		max_word=c;
		index_longest_word=i-max_word;
	}
	for(j=0; j<max_word; j++)
	{
		word[j]=str[index_longest_word];
		index_longest_word++;
	}
	word[j]=0;
}
void string_scan(char*str,int maxsize)
{
	int i=0;
	fflush(stdin);
	scanf("%c",&str[i]);
	for(; str[i]!='\n'&&i<maxsize;)
	{
		i++;
		scanf("%c",&str[i]);
	}
	str[i]=0;
}
void string_IntToString(int num,char*str)
{
	
	u8 i=0;
	u32 rem;
	if (num==0)
	{
		str[i]='0';
		return;
	}
	if (num<0)
	{
		num=num*-1;
		str[i]='-';
		i=1;
	}
	for (i;num>0;i++)
	{
		rem=num%10;
		str[i]=rem+'0';
		num=num/10;
	}
	str[i]=0;
	if (str[0]=='-')
	{
		string_reverse(str+1);
	}
	else
	{
		string_reverse(str);
	}
	
}
int string_StringToInt(char*str)
{
	int i,num=0;
	for(i=0; str[i]; i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			num=num*10+(str[i]-'0');
		}
	}
	return num;
}
void string_copy(char*arr1,char*arr2)
{
	int i;
	for(i=0; i<8; i++)
	{
		arr1[i]=arr2[i];
	}
}
char string_firstRepeatedChar(char*str)
{
	char count[265]= {0};
	int i;
	for(i=0; str[i]; i++)
	{
		count[str[i]]++;
		if(count[str[i]]==2)
		{
			return str[i];
		}
	}
	return 0;
}
void string_copyWithoutRepeatedChar(char*str,char*copy)
{
	char count[256]= {0};
	int i,j=0;
	for(i=0; str[i]; i++)
	{
		if(count[str[i]]==0)
		{
			copy[j]=str[i];
			count[str[i]]=1;
			j++;
		}
	}
	copy[j]=0;
}
int string_compare2(char*s1,char*s2)
{
	int i;
	for(i=0; s1[i]||s2[i]; i++)
	{
		if(s1[i]>s2[i])
		{
			return 1;
		}
		else if(s2[i]>s1[i])
		{
			return -1;
		}
	}
	return 0;
}
int string_compareNotSensitive2(char*s1,char*s2)
{
	int i;
	char c1,c2;
	for(i=0; s1[i]||s2[i]; i++)
	{
		c1=s1[i];
		c2=s2[i];
		if(c1>='A'&&c1<='Z')
		{
			c1=s1[i]-'A'+'a';
		}
		else if(c2>='A'&&c2<='Z')
		{
			c2=s2[i]-'A'+'a';
		}
		if(c1>c2)
		{
			return 1;
		}
		else if(c2>c1)
		{
			return -1;
		}
	}
	return 0;
}
