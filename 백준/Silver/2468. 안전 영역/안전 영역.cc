#include <bits/stdc++.h>
using namespace std;

int arr[101][101]={};
bool vist[101][101]={};
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};
int n;

void BFS(int y,int x,int v)
{
    queue<pair<int,int >>q;
    q.push({y,x});
    vist[y][x]=true;
    
    while(!q.empty())
    {
        int f= q.front().first;
        int t= q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++)
        {
            int ny = f+dy[i];
            int nx = t+dx[i];
            
            if(ny<0 ||ny>n ||nx<0 ||nx>n)
            {
                continue;
            }
            
            if(!vist[ny][nx] && arr[ny][nx]>v)
            {
                vist[ny][nx]=true;
                q.push({ny,nx});
            }
        }
    }
}

int main() {
    
    std::cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int v;
            cin>>v;
            
            arr[i][j]=v;
        }
    }
    
    int _max = 1;
    for(int k=1; k<101; k++)
    {
        int cnt = 0;
        memset(vist,false,sizeof(vist));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!vist[i][j] && arr[i][j]>k)
                {
                    BFS(i,j,k);
                    cnt++;
                }
            }
        }
        _max = max(_max,cnt);
    }
    cout<<_max;
    return 0;
}