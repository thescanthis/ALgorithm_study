#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    std::cin>>n;
    
    int arr[1001]={};
    int DP[1001]={};
    int Max=0;
    int index=0;
    std::vector<int>v;
    for(int i=1; i<=n; i++)
    {
        std::cin>>arr[i];
        int len=0;
        for(int j=1; j<=i; j++)
        {
            if(arr[i]>arr[j])
            {
                len=std::max(len,DP[j]);
            }
        }
        DP[i]=len+1;
        
        if(Max<DP[i])
        {
            Max=DP[i];
            index=i;
        }
        
    }
    
    for(int i=index; i>=1; i--)
    {
        if(DP[i]==Max)
        {
            v.push_back(arr[i]);
            Max--;
        }
    }
    std::cout<<v.size()<<'\n';
    for(int i=v.size()-1; i>=0; i--)
    {
        std::cout<<v[i]<<" ";
    }
    return 0;
}