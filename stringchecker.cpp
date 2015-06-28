#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checkers(char *str1,char *str2)
{
	//char str1[]="hacksindialack";
	//char str2[]="hacks";
	int len2=strlen(str2);
	int j=0;
	int i=0;
	int res;
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[0])
		{
		   for(j=0;str2[j]==str1[i] && str2[j]!='\0' && str1[i]!='\0';j++)
		   {printf("checking %c and %c\n",str2[j],str1[i]);
		     i++;
	       }
	       printf("%d and %d\n",len2,j);
		   if(j==len2)
		   {
		      res=1;
		      return res;
		   } 
		   else
		   {
		   	  res=0;
		   	  return res;
		   } 
		}
		i++;
	}

}
int main()
{
	checkers("ackshindialack","hacks");
	return 0;
}
