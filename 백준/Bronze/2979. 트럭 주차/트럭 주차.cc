#include <bits/stdc++.h>
using namespace std;

int arr[3]={};
int ans[101]={};
int main() {
    for(int i=0; i<3; i++) cin>>arr[i];
    
    for(int i=0; i<3; i++)
    {
        int x,y;
        std::cin>>x>>y;
        for(int j=x; j <y; j++)
        {
            ans[j]++;
        }
    }
    
    int v=0;
    for(int i=1; i<101; i++)
    {
        if(ans[i]==1) v+=arr[0];
        else if(ans[i]==2) v+=arr[1]*2;
        else if(ans[i]==3) v+=arr[2]*3;
    }
    cout<<v;
    
    return 0;
}