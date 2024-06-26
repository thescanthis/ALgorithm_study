#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>>v;
bool visted[1001]={};
int Component = 0;

void DFS(int _v)
{
    stack<int>s;
    s.push(_v);
    visted[_v]=true;
    while(!s.empty())
    {
        int top = s.top();
        bool Cycle = false;
        for(auto to : v[top])
        {
            if(!visted[to])
            {
                s.push(to);
                visted[to]=true;
                Cycle = true;
                break;
            }
        }
        if(!Cycle) 
        {
            s.pop();
        }
    }
    Component++;
}

int main() {
    cin>>n>>m;
    v.resize(n+1);
    while(m--)
    {
        int f,t;
        std::cin>>f>>t;
        v[f].push_back(t);
        v[t].push_back(f);
    }
    
    for(int i=1; i<v.size(); i++)
    {
        if(!visted[i]) 
        {
            DFS(i);
        }
    }
    cout<<Component;
    return 0;
}