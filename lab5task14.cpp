#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int X;
    cin>>X;
    for(int i=2;i<=X;i++)
    {
      if(X%i==0)
      {
        cout<<i;
      
        break;}
    }
system("pause>nul");
return 0;
}