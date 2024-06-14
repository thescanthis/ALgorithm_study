#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin>>n;
    int arr[1001]={};
    for(int i=1; i<=n; i++)
    std::cin>>arr[i];
    
    int DP[1001]={};
    DP[1]=arr[1];
    
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            DP[i]=std::max(DP[i],DP[i-j]+arr[j]);
        }
    }
    
    std::cout<<DP[n];
    return 0;
}