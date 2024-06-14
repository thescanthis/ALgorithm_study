#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    long long int n,r;
    cin>>n>>r;
    
    auto five=[](auto n){
        long long int cnt=0;
        for(long long int i=5; i<=n; i*=5) cnt+=n/i;
        return cnt;
    };
    auto two=[](auto n){
        long long int cnt=0;
        for(long long int i=2; i<=n; i*=2) cnt+=n/i;
        return cnt;
    };
    auto a=five(n)-five(n-r)-five(r);
    auto b=two(n)-two(n-r)-two(r);

    auto min=[](auto x, auto y)
    {
       long long int a=(x < y) ? x : y;
       return a;
    };
    cout<<min(a,b);
    return 0;
}