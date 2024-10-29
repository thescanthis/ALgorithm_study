// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int arr[60][60]={};
bool vist[60][60]={};
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};

int cnt =0;
int n,m,k;
int t;

void BFS(int y,int x)
{
    vist[y][x]=true;
    queue<pair<int,int>>q;
    q.push({y,x});
    
    while(!q.empty())
    {
        int fy = q.front().first;
        int fx = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++)
        {
            int ny = fy+dy[i];
            int nx = fx+dx[i];
            
            if(ny<0 ||ny>=m || nx<0 || nx>=n) continue;
            else{
                if(!vist[ny][nx] && arr[ny][nx]==1)
                {
                    vist[ny][nx] =true;
                    q.push({ny,nx});
                }
            }
        }
    }
}

int main() {
    
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>m>>n>>k;
        memset(arr,0,sizeof(arr));
        memset(vist,false,sizeof(vist));

        for(int j=0; j<k; j++)
        {
            int F,T;
            cin>>F>>T;
            arr[F][T]=1;

        }
        
        int cnt = 0;
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<n; l++)
            {
                if(!vist[j][l] && arr[j][l]==1)
                {
                    BFS(j,l);
                    cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}