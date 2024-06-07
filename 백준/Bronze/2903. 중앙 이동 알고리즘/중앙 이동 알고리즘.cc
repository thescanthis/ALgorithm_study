#include <bits/stdc++.h>
using namespace std;

int Ans(int n)
{
    
    int x=0;
    
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            x = 3;
        }
        else{
            x=x+(x-1);
        }
    }
    return x*x;
}

int main() {
    int n;
    std::cin>>n;
    cout<<Ans(n);
    return 0;
}