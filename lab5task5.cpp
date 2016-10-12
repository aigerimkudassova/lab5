#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double n,sum=0;
cin>>n;
for(double i=1;i<=n;i++){
sum+=1/(i*i);
}
cout<<sum;

system("pause>nul");

return 0;
}