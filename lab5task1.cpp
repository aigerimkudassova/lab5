#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,sum = 0;
    cin>>n;
    for(int i=1 ;i <= n; i++){
        sum+=i*i;
    }
    cout<<sum;


system("pause>nul");
return 0;
}