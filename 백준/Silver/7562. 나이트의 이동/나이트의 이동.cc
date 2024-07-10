#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edge;
vector<vector<bool>> MapFind;

int BFS(int s,int s1,int e,int e1,int m)
{
    if(s == e && s1 ==e1) return 0;
    queue<pair<int,int>>q;
    q.push({s,s1});
    MapFind[s][s1]=true;
    
    int my[8]={1,2,2,1,-1,-2,-2,-1};
    int mx[8]={2,1,-1,-2,-2,-1,1,2};
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i=0; i<8; i++)
        {
            int _my = my[i]+y;
            int _mx = mx[i]+x;
            
            if((_my>=0 && _mx>=0) && (_my<m && _mx<m))
            {
                if(_my == e && _mx ==e1) return edge[_my][_mx]=edge[y][x]+1;
                if(!MapFind[_my][_mx])
                {
                    MapFind[_my][_mx] = true;
                    edge[_my][_mx]=edge[y][x]+1;
                    q.push({_my,_mx});
                }
            }
        }
    }
    return 0;
}

int main() {
    
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++)
    {
        int m;
        std::cin>>m;
        
        edge = vector<vector<int>>(m,vector<int>(m,0));
        MapFind = vector<vector<bool>>(m,vector<bool>(m,false));
        
        int s,s1;
        std::cin>>s>>s1;
        
        int e,e1;
        std::cin>>e>>e1;
        
        cout<<BFS(s,s1,e,e1,m)<<'\n';
    }
    return 0;
}