#include<iostream>
using namespace std;

void primeNumber(int n, int m)
{
    ios_base::sync_with_stdio(false);
    bool* arr=(bool*) new bool[m];
    arr[0]=true;
    arr[1]=true;
    
    for(int i=2; i<=m; i++){
        
        if(arr[i]) continue;
        
        for(int j=2*i; j<=m; j+=i){
            arr[j]=true;
        }
    }
    
    for(int i=2; i<=m; i++)
    {
        if(i>=n&&n<=m){
            if(!arr[i]) cout<<i<<'\n';
        }
    }
    
    
    delete(arr);
}

int main(void)
{
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    primeNumber(n,m);
    return 0;
}