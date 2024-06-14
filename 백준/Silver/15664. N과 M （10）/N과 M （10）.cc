#include <bits/stdc++.h>
using namespace std;

#define MAX 10
int n,m;
int Inputs[MAX]={};
int arr[MAX]={};
bool check[MAX]={};

void Input()
{
    for(int i=0; i<n; i++)
    {
        std::cin>>Inputs[i];
    }
    sort(Inputs,Inputs+n);
}

void Print()
{
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void DFS(int v,int cnt)
{
    if(cnt==m)
    {
        Print();
        return;
    }
    int len = 0;
    for(int i=v; i<n; i++)
    {
        if(!check[i] && Inputs[i]!=len)
        {
            arr[cnt]=Inputs[i];
            len = arr[cnt];
            check[i]=true;
            DFS(i,cnt+1);
            check[i]=false;
        }
    }
}

int main() {
    
    std::cin>>n>>m;
    Input();
    
    DFS(0,0);
    return 0;
}