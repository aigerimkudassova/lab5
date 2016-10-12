#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int X,a=0;
  cin>>X;
  for(int i=1;i<=X;i++)
  {
    if(X%i==0)
    {
    a+=1;
    }
  }
cout<<a;
return 0;
}