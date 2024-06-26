#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> Map;
queue<pair<int,int>> distans;
bool LoopCheck[1000][1000]={};
void Input()
{
    std::cin>>n>>m;
    Map.resize(m);
    for(int y=0; y<m; y++)
    {
        for(int x=0; x<n; x++)
        {
            int v;
            std::cin>>v;
            Map[y].push_back(v);
        }
    }
    
    for(int y=0; y<m; y++)
    {
        for(int x=0; x<n; x++)
        {
            if(Map[y][x]==1)
            {
                distans.push(make_pair(y,x));
            }
        }
    }
}

void BFS()
{
    int MapSize =distans.size();
    
    int index =0 ;
    int ans = 0;
    while(!distans.empty())
    {
        int y_front = distans.front().first;
        int x_front = distans.front().second;
        
         if(index == distans.size())
         {
            ans++;
            index = 0;
         }
        
        distans.pop();
        LoopCheck[y_front][x_front]=true;
        
        int my[4]={0,1,0,-1};
        int mx[4]={1,0,-1,0};
        int cnt =0;
        for(int i=0; i<4; i++)
        {
            int _my = my[i]+y_front;
            int _mx = mx[i]+x_front;
            
            if(Map[y_front][x_front]==-1) continue;
            else if(Map[y_front][x_front]==1 && (_my>=0 && _mx>=0) && (_my<m && _mx<n))
            {
                if(Map[_my][_mx]==0 && !LoopCheck[_my][_mx])
                {
                    LoopCheck[_my][_mx] = true;
                    Map[_my][_mx] = 1;
                    distans.push(make_pair(_my,_mx));
                    index++;
                }
            }
        }
    }
    
    for(auto row : Map)
    {
        auto it =std::find(row.begin(),row.end(),0);
        if(it !=row.end())
        {
            ans=-1;
            break;
        }
    }
    
    cout<<ans;
}

int main() {
    Input();
    
    BFS();
    return 0;
}