#include <iostream>
#include <string>
using namespace std;

int GDC(int a,int b)
{
    if(b==0) return a;
    else return GDC(b,a%b);
}

int main() {
    
    int a,b;
    std::cin>>a>>b;
    int ans1=GDC(a,b);
    int ans2=(a*b)/ans1;
    
    std::cout<<ans1<<'\n'<<ans2;
    return 0;
}