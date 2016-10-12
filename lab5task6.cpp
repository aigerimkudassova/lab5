#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double n,sum=0;
cin>>n;
for(double i=0;i<=n;i++){
sum+=pow(-1,i)/(2*i+1);
}
cout<<4*sum;

return 0;
}