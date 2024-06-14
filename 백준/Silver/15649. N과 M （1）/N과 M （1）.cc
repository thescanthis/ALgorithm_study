#include <bits/stdc++.h>
#define MAX 8
using namespace std;

int n,m;
bool check[MAX]={};
int arr[MAX] ={};
std::vector<int>v;

void Print()
{
    for(int i=0; i<m; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}

void DFS(int cnt)
{
    if(cnt==m)
    {
        Print();
    }
    for(int i=0; i<n; i++)
    {
        if(check[i]==true) continue;
        check[i]=true;
        
        arr[i]=i+1;
        v.push_back(arr[i]);
        DFS(cnt+1);
        check[i]=false;
        v.pop_back();
    }
}



int main() {
    std::cin>>n>>m;
    DFS(0);
    return 0;
}