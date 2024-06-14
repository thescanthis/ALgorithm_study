#include <iostream>
using namespace std;

int main(void)
{
    int n; cin>>n;
    int temp=0;
    for(int i=5; i<=n; i*=5) temp+=n/i;
    cout<<temp;
    return 0;
}