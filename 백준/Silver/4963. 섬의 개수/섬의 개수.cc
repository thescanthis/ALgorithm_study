#include <iostream>
#include <queue>
#include <cstring>

#define MAX_SIZE 50

int w,h;
int Land_Num=0;
int graph[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];

int dw[8]={1,0,-1,0,1,1,-1,-1};
int dh[8]={0,1,0,-1,-1,1,-1,1};

void bfs(int h,int w)
{
    std::queue<std::pair<int,int>>q;
    q.push(std::make_pair(h,w));
    visited[h][w]=true;
    
    while(!q.empty()){
        h=q.front().first;
        w=q.front().second;
        
        q.pop();
        
        for(int i=0; i<8; i++)
        {
            int nh=h+dh[i];
            int nw=w+dw[i];
            
            if(0<=nw && 0<=nh && nw<MAX_SIZE && nh<MAX_SIZE){
                if(graph[nh][nw]&&!visited[nh][nw]){
                    visited[nh][nw]=true;
                    q.push(std::make_pair(nh,nw));
                }
            }
        }
    }
}

int main(void)
{
    while(1){
        std::cin>>w>>h;
        if(!w && !h) break;
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                std::cin>>graph[i][j];
            }
        }
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(graph[i][j]&&!visited[i][j]){
                    Land_Num++;
                    bfs(i,j);
                }
            }
        }
        std::cout<<Land_Num<<'\n';
        memset(graph,false,sizeof(graph));
        memset(visited,false,sizeof(visited));
        Land_Num=0;
    }
    return 0;
}