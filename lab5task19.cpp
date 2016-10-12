#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 
    int m,n,cnt=0;
    cin>>m>>n;
    while(n>0){
        if( n%10 == 0){
            cnt++;
        }
        n /= 10;
    }
    cout<<cnt;
    return 0; 
}