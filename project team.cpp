#include <stdio.h>
 
int main(int argc, char **argv)
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		//sorting
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(arr[j] > arr[j+1])
				{
					int temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		int min=2147483647;
		int max=0;
		for(i=0;i<n/2;i++)
		{
			if(arr[i] + arr[n-i-1] <min)
			{
				min=arr[i] + arr[n-i-1];
			}
			if(arr[i] + arr[n-i-1] >max)
			{
				max=arr[i] + arr[n-i-1];
			}
		}
		printf("%d\n",max-min);		
	}
	return 0;
}
