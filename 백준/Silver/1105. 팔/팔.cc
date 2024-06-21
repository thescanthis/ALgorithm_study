#include <iostream>
using namespace std;

int main(void)
{
    int L,R;
    cin>>L>>R;
    
    int ans=0;
    int v=1000000000;
    
    while(v)
    {
        if(L/v%10!=R/v%10) break;
        else if(L/v%10==R/v%10 && L/v%10==8 && R/v%10==8)
            ans++;
        v/=10;
    }
    cout<<ans;
    return 0;
}