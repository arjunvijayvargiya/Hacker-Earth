#include<stdio.h>
int main()
{
	int t,p;
	scanf("%d",&t);
	int ans[t];
	for(p=0;p<t;p++)
	  ans[p]=0;
	int i,j,k,l;
	for(i=0;i<t;i++)
	{
		int num;
		scanf("%d",&num);
		int arr[num];
		for(j=0;j<num;j++)
		  scanf("%d",&arr[j]);
		for(k=0;k<num;k++)
		{
			for(l=k;l<num;l++)
			{
				if(arr[l]==arr[k])
				 ans[i]++;
			}
		}
	}
	for(i=0;i<t;i++)
	  printf("%d\n",ans[i]);
	return 0;
}
