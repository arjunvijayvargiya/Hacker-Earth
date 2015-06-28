#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	int arr[t],ans[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&arr[i]);
		int z=floor(arr[i]/2);
		z=floor(z/2);
		ans[i]=pow(z,2);
	}
	for(i=0;i<t;i++)
	  printf("%d\n",ans[i]);
	return 0;
}
