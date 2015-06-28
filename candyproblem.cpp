#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int ans[1000];
	int k=0;
	while(1)
	{
	   scanf("%d",&num);
	   if(num==-1)
	    { k--;
	      break;
	    }
	   int i,arr[num];
	   int sum=0;
	   for(i=0;i<num;i++)
	   {
	   	 scanf("%d",&arr[i]);
	   	 sum=sum+arr[i];
	   }
	   int cnt=0;
	   int candy=sum/num;
	   for(i=0;i<num;i++)
	   {
	   	  if(arr[i]<candy)
			 cnt=cnt+fabs(arr[i]-candy);
	   }
	   if(sum%num==0)
	    {
	    	ans[k]=cnt;
	    	k++;
	    }
	   else
	   {
	   	   ans[k]=-1;
	   	   k++;
	   }
	    
	}
	printf("candy");
	return 0;
}
