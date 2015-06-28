#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str="googleindia";
	char c='i';
	char *nstr=(char *)malloc(sizeof(char));
	char *start=nstr;
	while(*str)
	{
		if(*str!='i')
		{
			*nstr=*str;
			str++;
			nstr++;
		}
		else
		{
			str++;
		}
		
		
	}
	*nstr='\0';
	while(*start)
	{
		printf("%c",*start);
		start++;
	}
	
	
	
	return 0;
}
