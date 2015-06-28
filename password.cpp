#include<stdio.h>
#include<string.h>
int main()
{int n;
	scanf("%d",&n);
	char c[n][80];
	for(int i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	} 
	//finding rev
	char rc[n][80];
	for(int j=0;j<n;j++)
	{
	 int k=0;
	   for(int i=strlen(c[j])-1;i>=0;i--)
	    {
	       rc[j][k++]=c[j][i];	
	    }
	} 
	int pos=-1;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			if(strcmp(c[i],rc[k])==0 && i!=k)
			{
				pos=i;
				goto arena;
			}
		}
	}
	arena:
		printf("%d %c",strlen(c[pos]),c[pos][(int)(strlen(c[pos])/2)]);
	
	return 0;
}
