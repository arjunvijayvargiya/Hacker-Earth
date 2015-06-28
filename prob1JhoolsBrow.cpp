#include<stdio.h>
#include<string.h>
int main()
{
	
	int n;
	scanf("%d",&n);
	char str[n][50];
	for(int i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	} 
	int cnt[n];
	/*for(int i=0;i<n;i++)
	{
		printf("\n %s \n",str[i]);
	} */
	
	for(int i=0;i<n;i++)
	{int j=0;
	 cnt[i]=0;
		while(str[i][j]!=NULL)
		{//printf("comparing %c and cnt[%d]=%d",str[i][j],cnt[i]);
		   if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')	
			 cnt[i]++;
			 
		   j++;
			
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d/%d \n",strlen(str[i])-3-cnt[i],strlen(str[i]));
	}	
	return 0;
}
