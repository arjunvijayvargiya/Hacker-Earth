#include<stdio.h>
#include<stdlib.h>
int main()
{int num;
 int arr[10000];
 scanf("%d",&num);
 int i;
 for(i=0;i<num;i++)
 { scanf("%d",&arr[i]);
 	 
 }
 int m;
 scanf("%d",&m);
 int x[m];
 for(i=0;i<m;i++)
 {
 	scanf("%d",&x[i]);
 }
 int j,k;
 for(i=0;i<m;i++)
 {
 	j=0;
 	for(j=0;j<num;j++)
 	{
 		if(arr[j]>x[i])
 		  arr[j]=arr[j]-1;
 	}
 }
 for(i=0;i<num;i++)
 {
 	printf("%d ",arr[i]);
 }
	return 0;
}

