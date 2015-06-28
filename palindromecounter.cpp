#include<stdio.h>
int palindrome(int num)
{int ori=num;
 int y=0;
	while(num!=0)
	{
		y=(y*10)+(num%10);		
	    num=num/10;
	}
	if(y==ori)
	  return 1;
	else
	  return 0;
	
}
int check(int x,int y)
{
	int cnt=0;
	for(int i=x;i<=y;i++)
	{
		int k=palindrome(i);
		if(k==1)
		   cnt++;
	}
	return cnt;
}
int main()
{   int n;
	
	//printf("hello");
	scanf("%d",&n);
	//printf("hello");
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		
	}
    for(int i=0;i<n;i++)
	{
		int g=check(a[i],b[i]);
		printf("%d\n",g);
		
	}
	
	return 0;
}

