#include<stdio.h>
#include<string.h>
#include<ctype.h>
void strcheck(char c[],int g);
int main()
{int n;
 
	scanf("%d",&n);
	char str[n][80];
	for(int i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(int i=0;i<n;i++)
	{
		strcheck(str[i],strlen(str[i]));
	}
	
	return 0;
}
void strcheck(char c[],int g)
{int arr[26]={0};
  if(g<26)
    {
    	printf("NO \n");
    	return;
    }
    else
    {
    
	   for(int i=0;i<g;i++)
	  {
	   if(isalpha(c[i]))
	   {
	   	   arr[c[i]-'a']++;
	   }
      }
      for(int i=0;i<26;i++)
      {
      	if(arr[i]==0)
      	{
      		printf("NO \n");
      		return;
      	}
      	
      }
      printf("YES \n");
	}
	
	
}
