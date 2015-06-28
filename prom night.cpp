#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,i,j,k,m,n;
	scanf("%d",&t);
	int f=1;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		int arr1[m];
		int arr2[n];
		for(j=0;j<m;j++)
		 scanf("%d",&arr1[j]);
		for(k=0;k<n;k++)
		 scanf("%d",&arr2[k]);
		//qsort(arr1,m, sizeof(int), cmpfunc);
	    //qsort(arr2,n, sizeof(int), cmpfunc);
	    partition(arr1,0,m-1);
	    partition(arr2,0,n-1);
		if(m>n)
	    {
	    	f=0;
	    	goto last;
	    }
	    else
	    {
	    	for(j=0;j<m;j++)
	    	{
	    		if(arr1[j]<arr2[j])
	    		{
	    			f=0;
					goto last;
	    		}
	    	}
	    }
	    last:
	    	if(f)
	    	  printf("YES\n");
	    	else
	    	  printf("NO\n");
	}
	
	
}
void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

