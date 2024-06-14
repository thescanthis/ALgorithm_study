#include <bits/stdc++.h>
using namespace std;

#define MAX 9

int     n,m;
bool    vist[MAX]={};
int     val[MAX]={};
int     ans[MAX]={};

void Input()
{
    for(int i=0; i<n; i++)
    {
        std::cin>>val[i];
    }
    std::sort(val,val+n);
}

void Print()
{
    for(int i=0; i<m; i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
}


void DFS(int v)
{
    if(v==m)
    {
        Print();
        return;
    }
    int CycleValue = 0;
    for(int i=0; i<n; i++)
    {
      if(vist[i]==false && val[i]!=CycleValue)
      {
          ans[v]=val[i];
          CycleValue=ans[v];
          vist[i]=true;
          DFS(v+1);
          vist[i]=false;
      }
       
    }
}


int main() {
   
   std::cin>>n>>m;
   Input();
   DFS(0);
   return 0;
}