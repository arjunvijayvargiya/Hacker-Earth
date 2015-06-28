#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(long a,long b,int len,char w[]);
int main()
{   
    char str[100000];
    long n;
	scanf("%s",str);
	
	scanf("%d",&n);
	long a1[n],a2[n];
	for(int i=0;i<n;i++)
	{
		scanf("%ld %ld",&a1[i],&a2[i]);
	    
	}
	for(int i=0;i<n;i++)
	{
		
	    check(a1[i],a2[i],strlen(str),str);
	}
	
	
	return 0;
}
void check(long a,long b,int len,char c[])
{
	if(a>len)
	{
		a=a%len;
		
	}
	if(b>len)
	{
		 b=b%len;
		
	}
	if(c[a-1]==c[b-1])
	  printf("Yes \n");
	else
	  printf("No \n");
	
	
}

