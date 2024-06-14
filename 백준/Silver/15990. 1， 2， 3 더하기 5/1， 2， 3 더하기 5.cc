#include <iostream>
#define MAX 100001
using namespace std;

long long arr[1000001][4]={};
int mod=1000000009;
int n;
void Input()
{
    arr[1][1]=1;
    arr[2][2]=1;
    arr[3][1]=1;
    arr[3][2]=1;
    arr[3][3]=1;
    
    for(int i=4; i<=MAX; i++)
    {
        arr[i][1]=(arr[i-1][2]+arr[i-1][3])%mod;
        arr[i][2]=(arr[i-2][1]+arr[i-2][3])%mod;
        arr[i][3]=(arr[i-3][1]+arr[i-3][2])%mod;
    }
}
int main() {
    std::cin>>n;
    Input();
    while(n--)
    {
        int x;
        std::cin>>x;
        int ans=(arr[x][1]+arr[x][2]+arr[x][3])%mod;
        std::cout<<ans<<'\n';
    }
    return 0;
}