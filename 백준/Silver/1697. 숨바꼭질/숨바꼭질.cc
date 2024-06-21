#include <iostream>
#include <queue>
#define MAX 100001

int n,m;
bool visit[MAX];
int arr[]={1,-1};
void Input()
{
    std::cin>>n>>m;
}

void BFS(int v)
{
    std::queue<std::pair<int ,int>>q;
    q.push(std::make_pair(v,0));
    visit[v]=true;
    
    while(!q.empty())
    {
        int x=q.front().first;
        int t=q.front().second;
        
        q.pop();
        if(x==m)
        {
            std::cout<<t<<'\n';
            return;
        }
        for(int i=0; i<2; i++)
        {
            int nx=arr[i]+x;
            
            if(nx>=0 && nx<MAX)
            {
                if(visit[nx]==false)
                {
                    q.push(std::make_pair(nx,t+1));
                    visit[nx]=true;
                }
            }
        }
        if(x*2<MAX)
        {
            if(visit[x*2]==false)
            {
                q.push(std::make_pair(x*2,t+1));
                visit[x*2]=true;
            }
        }
    }
}

void ans()
{
    Input();
    BFS(n);
}

int main(void)
{
    ans();
    return 0;
}