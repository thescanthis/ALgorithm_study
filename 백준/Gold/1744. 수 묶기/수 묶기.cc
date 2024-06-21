#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::vector<int>Max;
    std::vector<int>Min;
    
    int n; 
    std::cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        if(x>0) Max.emplace_back(x);
        else Min.emplace_back(x);
    }
    
    std::sort(Max.begin(),Max.end(),std::greater<>());
    std::sort(Min.begin(),Min.end());
    
    int ans=0;
    
    if(Max.size()%2==1) ans+=Max[Max.size()-1];
    
    
    for(int i=0; i<(int)Max.size()-1;)
    {
        if(Max[i+1]==1) ans+=Max[i]+Max[i+1];
        else if(Max[i+1]>0) ans+=Max[i]*Max[i+1];
        
        i+=2;
    }
    
    if(Min.size()%2==1) ans+=Min[Min.size()-1];
    
    for(int i=0; i<(int)Min.size()-1; i+=2)
    {
        ans+=Min[i]*Min[i+1];
    }
    
    std::cout<<ans;
    return 0;
}