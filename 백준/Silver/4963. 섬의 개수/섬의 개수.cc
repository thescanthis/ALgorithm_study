#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edge;
bool MapCheck[50][50]={};
int c,r;

void Input()
{
    edge.clear();
    memset(MapCheck,false,sizeof(MapCheck));
    
    edge.resize(r);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int V;
            std::cin>>V;
            edge[i].push_back(V);
        }
    }
}

void BFS(int y,int x)
{
    MapCheck[y][x]=true;
    queue<pair<int,int>> q;
    q.push(make_pair(y,x));
    
    while(!q.empty())
    {
        int y_front = q.front().first;
        int x_front = q.front().second;
        
        q.pop();
        
        int my[8] = {0,1,1,1,0,-1,-1,-1};
        int mx[8] = {1,1,0,-1,-1,-1,0,1};
        
        for(int i=0; i<8; i++)
        {
            int _my = my[i]+y_front;
            int _mx = mx[i]+x_front;
            
            if((_my>=0 && _mx>=0) && (_my<r && _mx<c))
            {
                if(!MapCheck[_my][_mx] && edge.at(_my).at(_mx)==1)
                {
                    MapCheck[_my][_mx]=true;
                    q.push(make_pair(_my,_mx));
                }
            }
        }
    }
}

int main() {
   
   
   while(true)
   {
       std::cin>>c>>r;
       if(!c && !r) break;
       Input();
       
       int ans = 0 ;
       for(int y=0; y<r; y++)
       {
           for(int x=0;x <c; x++)
           {
               if(!MapCheck[y][x] && edge.at(y).at(x) == 1)
               {
                   BFS(y,x);
                   ans++;
               }
           }
       }
       cout<<ans<<'\n';
   }
    return 0;
}