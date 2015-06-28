#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	int ans[t];
	for(i=0;i<t;i++)
	  ans[i]=0;
	for(i=0;i<t;i++)
	{int num;
		scanf("%d",&num);
		int prev=-1;
		if(num%21==0)
		{printf("21 divisor\n");
			ans[i]=1;
			continue;
		}
		while(num)
		{
			int temp=num%10;
			printf("prev=%d and temp=%d\n",prev,temp);
			if(temp==2 && prev==1)
			{printf("number win\n");
				ans[i]=1;
				break;
			}
			prev=temp;
			num=num/10;
		}
		
		
	}
	for(i=0;i<t;i++)
	  printf("%d ",ans[i]);
	return 0;
}
