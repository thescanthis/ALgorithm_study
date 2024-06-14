#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

std::vector<int>edge[1001];
bool check[1001];

void DFS(int v)
{
    if(check[v]) return;
    check[v]=true;
    std::cout<<v<<' '; //방문하고 출력
    for(int to : edge[v]) DFS(to); // 연결된 모든 정점 탐색진행;
    //루프를 빠져나왔다는건 v에 연결되어져 있는 모든 정점을 완료했다는것
}

void BFS(int v){
    std::queue<int>q;
    q.push(v); check[v]=true;
    
    while(!q.empty()){
        int from=q.front(); q.pop();
        std::cout<<from<<' ';
        for(int to : edge[from]){
            if(check[to]==false){q.push(to); check[to]=true;}
        }
    }
}

int main(void)
{
    int n,m,start;
    std::cin>>n>>m>>start;
    while(m--){
        int f,t; std::cin>>f>>t;
        edge[f].emplace_back(t);
        edge[t].emplace_back(f);
    }
    for(int i=1; i<1001; i++) sort(edge[i].begin(),edge[i].end());
    
    DFS(start);
    std::cout<<'\n';
    memset(check,false,sizeof(check));
    BFS(start);
}