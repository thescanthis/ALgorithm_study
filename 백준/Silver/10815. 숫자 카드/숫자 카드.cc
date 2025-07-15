#include<iostream>
#include<bitset>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    bitset<20000010>a(0);
    
    int n,v;
    cin>>n;
    while(n--){
        cin>>v;
        a.set(10000000+v);
    }
    cin>>n;
    while(n--){
        cin>>v;
        cout<<a.test(10000000+v)<<" ";
    }
    return 0;
}