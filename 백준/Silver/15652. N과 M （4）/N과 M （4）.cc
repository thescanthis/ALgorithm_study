#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int n,m;
int arr[MAX]={};

void DFS(int cnt,int y)
{
    if(cnt==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=y; i<n; i++)
    {
        arr[cnt]=i+1;
        DFS(cnt+1,i);
    }
}

int main() {
    std::cin>>n>>m;
    DFS(0,0);
    return 0;
}