#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int arr[num];
	int cnt=0;
	for(i=0;i<num;i++)
	 {
	    scanf("%d",&arr[i]);
	    if(arr[i]%3==0)
	      cnt++;
     }
     printf("%d",cnt);
	return 0;
}
