#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

int n,m;
bool Check[SIZE]={};
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

void DFS(int cnt)
{
    if(cnt==m)
    {
        Print();
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        if(Check[i]==true) continue;
        Check[i]=true;
        v.push_back(arr[i]);
        DFS(cnt+1);
        v.pop_back();
        Check[i]=false;
    }
}


int main() {
    
    std::cin>>n>>m;
    Input();
    DFS(0);
    return 0;
}