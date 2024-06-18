#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

int n,m;
bool visit[2001]={},answer=0;
vector<int>v[2001];


void DFS(int idx, int cnt)
{
    if(cnt == 4)
    {
        answer= true;
        return;
    }
    
    visit[idx]=true;
    for(int i=0; i<v[idx].size(); i++)
    {
        int n_idx = v[idx][i];
        if(visit[n_idx]==false)
            DFS(n_idx,cnt+1);
        
        if(answer==true) return;
    }
    
    visit[idx] = false;
}
int main() {
    
   std::cin>>n>>m;
   
   for(int i=0; i<m; i++)
   {
       int a,b;
       std::cin>>a>>b;
       
       v[a].push_back(b);
       v[b].push_back(a);
   }
   
   
   for(int i=0; i<n; i++)
   {
       memset(visit,false,sizeof(visit));
       DFS(i,0);
       if(answer == true) break;
   }
   
   if(answer == true) cout<<1<<'\n';
   else cout<<0<<'\n';
   return 0;
}