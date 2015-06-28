#include <iostream>
using namespace std;

int main()
{
int i,j,k,l,m;

for(i=1;i<=100;i++)
{
if(i%3==0 && i%5==0)
{
cout<<"FizzBuzz";
cout<<endl;
}
else if(i%3==0)
{
cout<<"Fizz";
cout<<endl;
}
else if(i%5==0)
{
cout<<"Buzz";
cout<<endl;
}
else
  cout<<i<<endl;

}
}

