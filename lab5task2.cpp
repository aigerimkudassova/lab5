#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n,k,C,nf = 1,kf = 1, nkf = 1;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        nf = nf*i;
    }
    for(int i=1;i<=k;i++){
        kf = kf*i;
    }
    for(int i=1;i<=n-k;i++){
        nkf = nkf*i;
    }
    C = nf/(kf*nkf);
    cout<<C;
    
system("pause>nul");
return 0;
}