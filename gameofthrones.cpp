#include<stdio.h>
int main()
{

int n,p,h,i,j,l;
scanf("%d",&n);
long test[n];
char str[][10]={"SL","LB","BS"};
for(h=0;h<n;h++)
{
    scanf("%ld",&test[h]);
}
long max=test[0];
for(p=0;p<n;p++)
{
    if(test[p]>max)
       max=test[p];
}
//initiating array
long chk[max];
int cnt=0;
for(i=0;cnt<max;i++)
{
  for(j=0;j<(i+1);j++)
  {
       //printf("%d",(i+1));
       chk[cnt]=i+1;
       cnt++;
  }
}
/*for(l=0;l<max;l++)
{
   printf("%d",chk[l]);
}*/
i=0;
while(i<n)
{
   long q=chk[test[i]-1];
   //printf("dividing 3 by %d =%d",q,3%q);
   if(q%3==0)
   {
       printf("%s \n",str[0]);
   }
   else if(q%3==1)
      printf("%s \n",str[1]);
   else
      printf("%s \n",str[2]);
i++;
}
return 0;
}
