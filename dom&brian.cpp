#include<stdio.h>
#include<math.h>
int main()
{int num;
	scanf("%d",&num);
	int dom[num],brian[num];
	int i;
	int maxd=0;
	int maxb=0;
	for(i=0;i<num;i++)
	{
		scanf("%d",&dom[i]);	
	}
	for(i=0;i<num;i++)
	{
		if(i!=0)
		{
			if(fabs(dom[i]-dom[i-1])>maxd)
			  maxd=fabs(dom[i]-dom[i-1]);
		}
	}
	for(i=0;i<num;i++)
	{
		scanf("%d",&brian[i]);
	}
	for(i=0;i<num;i++)
	{
		
		if(i!=0)
		{
			if(fabs(brian[i]-brian[i-1])>maxb)
			  maxb=fabs(brian[i]-brian[i-1]);
		}
	}
	if(maxd==maxb)
	  printf("Tie");
	else if(maxd>maxb)
	{
		printf("Dom\n%d",maxd);
	}
	else
	   printf("Brian\n%d",maxb);	
	return 0;
}
