#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int n = 9;
    
    std::vector<int>v;
    
    int Sum = 0;
    
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        v.push_back(x);
        Sum+=x;
    }
    
    std::sort(v.begin(),v.end());
    
    int s,e;
    for(int i=0; i<n; i++)
    {
        bool check = false;
        for(int j=0; j<n; j++)
        {
            if(Sum-(v[i]+v[j])== 100)
            {
                s=v[i];
                e=v[j];
                check = true;
            }
        }
        if(check) break;
    }
    
    for(int i=0; i<9; i++)
    {
        if(v[i]==s) continue;
        if(v[i]==e) continue;
        
        cout<<v[i]<<'\n';
    }
    
    return 0;
}