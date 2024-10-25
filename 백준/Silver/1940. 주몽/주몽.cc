// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;
int sum,cnt;

int main() {
    cin>>n>>m;
    
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        v.push_back(x);
    }
    
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]+v[j]==m)cnt++;
        }
    }
    cout<<cnt;
    return 0;
}