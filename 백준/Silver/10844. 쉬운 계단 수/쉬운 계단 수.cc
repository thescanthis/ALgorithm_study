#include <iostream>
#define MOD 1000000000
using namespace std;

int main() {
    int n;
    std::cin>>n;
    
    int DP[101][11]={};
    
    for(int i=1; i<10; i++)
    {
        DP[1][i]=1;
    }
    
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<10; j++){
            if(j==0) DP[i][j]=DP[i-1][j+1];
            else if(j==9) DP[i][j]=DP[i-1][j-1];
            else DP[i][j]=(DP[i-1][j-1]+DP[i-1][j+1])%MOD;
        }
    }
    int ans=0;
    
    for(int i=0; i<10; i++)
    {
        ans=(ans+DP[n][i])%MOD;
    }
    std::cout<<ans;
    return 0;
}