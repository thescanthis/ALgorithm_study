#include <iostream>
#include <set>
#include <string>
using namespace std;

void Cout(int ans)
{
    std::cout<<ans<<'\n';
}

int PlusV(int a,int b,int c)
{
    return (a+b)%c;
}

int PlusV1(int a,int b,int c)
{
    return ((a%c)+(b%c))%c;
}

int PlusV2(int a,int b,int c)
{
    return (a*b)%c;
}

int PlusV3(int a,int b,int c)
{
    return ((a%c)*(b%c))%c;
}

int main() {
    
    int a,b,c;
    std::cin>>a>>b>>c;

    Cout(PlusV(a,b,c));
    Cout(PlusV1(a,b,c));
    Cout(PlusV2(a,b,c));
    Cout(PlusV3(a,b,c));
    
    
    return 0;
}