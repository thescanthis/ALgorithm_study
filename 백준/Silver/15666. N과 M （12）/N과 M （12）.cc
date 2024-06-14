#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

int n,m;
bool check[SIZE]={};
std::vector<int> arr,v;

void Input()
{
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
}

void Print()
{
    for(int i=0; i<m; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}

void DFS(int cnt,int j)
{
   if(cnt == m)
   {
       Print();
       return;
   }
   
   int Cycle = 0;
   for(int i=j; i<n; i++)
   {
       if(arr[i]==Cycle) continue;
       v.push_back(arr[i]);
       Cycle = v[v.size()-1];
       DFS(cnt+1,i);
       v.pop_back();
   }
}


int main() {
    
    std::cin>>n>>m;
    Input();
    DFS(0,0);
    return 0;
}