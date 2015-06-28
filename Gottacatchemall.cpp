#include<stdio.h>
#include<stdlib.h>
void merge(long long int a[],long long int aux[],long long int lo,long long int mid,long long int hi)
{
	long long int i,k,j;
	for(k=lo;k<=hi;k++)
	{
		aux[k]=a[k];
	}
	i=lo;
	j=mid+1;
	for(k=lo;k<=hi;k++)
	{
		if(i > mid)
		a[k]=aux[j++];
		else if(j > hi)
		a[k]=aux[i++];
		else if(aux[i] > aux[j])
		a[k]=aux[i++];
		else 
		a[k]=aux[j++];
	}
}
void mergesort(long long int a[],long long int aux[],long long int lo,long long int hi)
{ 
	if(hi <= lo)
	return;
	long long int mid=(lo+hi)/2;
	mergesort(a,aux,lo,mid);
	mergesort(a,aux,mid+1,hi);
	merge(a,aux,lo,mid,hi);
	
}
void sort(long long int a[],long long int n)
{
	long long int aux[n];
    mergesort(a,aux,0,n-1);
}

int main()
{
	long long int c=0;
	long long int i;
	long long int k;
	scanf("%lld",&k);
	long long int a[k];
	for(i=0;i<k;i++)
	scanf("%lld",&a[i]);
	sort(a,k);
	/*for(int i=0;i<k;i++)
	{
		printf("%lld ",a[i]);
	}*/
	for(i=0;i<k;i++)
	{
		a[i]+=(i+1);
	}
	sort(a,k);
	printf("%lld",a[0]+1);
	
	return 0;
}
