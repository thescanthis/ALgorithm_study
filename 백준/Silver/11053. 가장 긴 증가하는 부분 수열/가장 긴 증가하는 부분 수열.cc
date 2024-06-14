#include <iostream>
using namespace std;

int main(void)
{
    int n;
    std::cin>>n;
    int DP[1001]={};
    int arr[1001]={};
    
    for(int i=1; i<=n; i++) std::cin>>arr[i];
    
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        DP[i]=0;
        for(int j=1; j<=i; j++)
        {
            if(arr[i]>arr[j])
            {
                DP[i]=max(DP[i],DP[j]);
            }
        }
        DP[i]+=1;
        ans=max(ans,DP[i]);
    }
    std::cout<<ans;
    return 0;
}