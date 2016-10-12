#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,n,G=0;
cin>>a>>n;
for(int i=0;i<=n;i++){
G+=pow(a,i);
}
cout<<G;
system("pause>nul");
return 0;
}