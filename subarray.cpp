#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i,j,k,l,n;
	int ans[num];
	for(i=0;i<num;i++)
	{int count[10]={0};
	 int pos[10]={-1};
	 int diff[10]={0};
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			int z;
			scanf("%d",&z);
			count[z]++;
			if(pos[z]==-1)
			  pos[z]=j;
			int difference;
			if(count[z]>1)
			{
			  difference=fabs(j-pos[z]);
			  if(diff[z]==0)
			    diff[z]=difference;
			  else
			  {
			  	if(difference>diff[z])
			  	  diff[z]=difference;
			  }
		    }
		}
		int m;
		int maxima=-1;
		for(m=0;m<10;m++)
		{
			if(diff[m]>maxima)
			 maxima=diff[m];
		}		
		//ans[i]=maxima;
	    if(maxima==0)
	      ans[i]=1;
	    else if(maxima==1)
	      ans[i]=2;
	    else
	      ans[i]=maxima;
	}
	for(i=0;i<num;i++)
	  printf("%d\n",ans[i]);
	return 0;
}
