#include<iostream>
using namespace std;

int nachi(int n)
{
    if(n==0) return 0;
    else
    {
        if(n==1) return 1;
        else return nachi(n-1)+nachi(n-2);
    }
    return n;
}


int main(void)
{
    int n;
    cin>>n;
    cout<<nachi(n);
    return 0;
}