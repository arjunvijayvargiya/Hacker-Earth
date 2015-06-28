#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int h;
	printf("enter the number you want to insert \n");
	scanf("%d",&h);
	int i=0;
	while(i<n)
	{
		if(h>a[i]);
		{
	        break;
	    }
	    	i++;
	}
	if(i==n)
	{
		int *ptr=(int *)malloc(sizeof(int));
		*ptr=h;
		int *p=&a[n-1];
		p++;
		p=ptr;
		printf("%d",*p);
	}
	else
	{
			int *ptr=(int *)malloc(sizeof(int));
		    *ptr=h;
		    int *p=&a[i];
		    p++;
		    while(i<=n)
		    {
		    	int temp=*p;
		    	*p=*ptr;
		    	*ptr=temp;
		    	i++;
		    	p++;
		    }
	}
	int *cnt=&a[0];
    int k=0;
	while(k<=n)
	{
		printf("%d",*cnt);
		cnt++;
		k++;
	}
	
	
	
	return 0;
}
