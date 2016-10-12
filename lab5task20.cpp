#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int N,m=1;
 cin>>N;
  for(int i=1;N>=i;i++)
  {
    m*=i;
  }
cout<<m;

return 0;
}