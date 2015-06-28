#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k,cnt;
	scanf("%d",&t);
	char ans[t][100];
	for(i=0;i<t;i++)
	{
		char temp[100];
		char str[100];
		scanf("%s",str);
		j=0;
		k=0;
		while(str[j]!='\0')
		{   
			char ch=str[j];
			if(k==0 || temp[k-1]!=ch)
			  temp[k++]=ch;
			j++;
		}
		temp[k]='\0';
		strcpy(ans[i],temp);
	}
	for(i=0;i<t;i++)
	  printf("%s\n",ans[i]);
	
}
