#include <stdio.h>

int main()
{
	int l,n;
	scanf("%d",&l);
	//printf("\n");
	scanf("%d",&n);
	int arr[n][2];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]<l || arr[i][1]<l)
		  printf("UPLOAD ANOTHER \n");
		else if(arr[i][0]==l && arr[i][1]==l)
		  printf("ACCEPTED \n");
		else
		 printf("CROP IT \n");
	}
	
	
    //printf("Hello World!\n");
    return 0;
}

