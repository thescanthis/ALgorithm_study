#include<iostream>
using namespace std;

int GDC(int a,int b)
{
    if(b==0) return a;
    else return GDC(b,a%b);
}

int main(void)
{
    int n;
    std::cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int a,b;
        std::cin>>a>>b;
        int gdc=GDC(a,b);
        int ans=(a*b)/gdc;
        std::cout<<ans<<'\n';
    }
    
    return 0;
}