#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int ans[num];
	int que[num][2];
	for(i=0;i<num;i++)
	{
		scanf("%d %d",&que[i][0],&que[i][1]);
	}
	int init,j;
	for(i=0;i<num;i++)
	{
		init=que[i][0];
		for(j=0;j<que[i][1];j++)
		{
		   if(init==0)
		     init=1;
		   else if(init==1)
		     init=0;
		   else
		     init=1;
		}
		ans[i]=init;
	}
	for(i=0;i<num;i++)
	  printf("%d\n",ans[i]);
	return 0;
}
