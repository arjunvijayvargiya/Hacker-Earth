#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{int t,i,j;
	scanf("%d",&t);
	int arr[t];
	int ans[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,t, sizeof(int), cmpfunc);
	for(i=0;i<t;i++)
	{
		ans[i]=arr[i];
		for(j=i+1;j<t;j++)
		  arr[j]--;
	}
	for(i=0;i<t;i++)
	  printf("%d ",ans[i]);
	return 0;
}
