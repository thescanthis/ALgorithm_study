#include <iostream>
#include <stack>
#include <vector>

using namespace std;

std::vector<int>edge[1001];
bool check[1001]={};

void DFS(int v)
{
    check[v]=true;
    
    for(int i=0; i<edge[v].size(); i++)
    {
        int y=edge[v][i];
        if(check[y]==false) DFS(y);
    }
}

int main(void)
{
    int n,m;
    std::cin>>n>>m;
    
    for(int i=0; i<m; i++)
    {
        int f,t;
        std::cin>>f>>t;
        
        edge[f].push_back(t);
        edge[t].push_back(f);
    }
    
    
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(check[i]==false)
        {
            DFS(i);
            cnt++;
        }
    }
    
    cout<<cnt;
    
    return 0;
}