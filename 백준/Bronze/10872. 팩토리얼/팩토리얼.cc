#include<iostream>
using namespace std;

int Factoreal(int n)
{
    if(n==0) return 1;
    else
    {
        return Factoreal(n-1)*n;
    }
}

int main(void)
{
    int n;
    cin>>n;
    cout<<Factoreal(n);
    return 0;
}