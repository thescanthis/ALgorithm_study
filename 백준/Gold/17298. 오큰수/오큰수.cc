#include <iostream>
#include <stack>
#include <vector>

int main(void)
{
    int n;
    std::cin>>n;
    std::stack<int>st;
    std::vector<int>v;
    std::vector<int>ans;
    int index=0;
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        v.emplace_back(x);
    }
    
    for(int i=v.size()-1; i>=0; i--)
    {
        while(!st.empty() && st.top()<=v[i]) st.pop();
        
        if(st.empty()) ans.emplace_back(-1);
        else ans.emplace_back(st.top());
        
        st.push(v[i]);
        
    }
    
    for(int i=ans.size()-1; i>=0; i--) std::cout<<ans[i]<<" ";
    return 0;
}