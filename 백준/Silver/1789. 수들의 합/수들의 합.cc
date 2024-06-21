#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    
    long long int x=0;
    long long int ans=0;
    long long int cnt=0;
    while(1)
    {
        x++;
        ans+=x;
        if(ans>n) break;
        cnt=x;
    }
    cout<<cnt;
    return 0;
}