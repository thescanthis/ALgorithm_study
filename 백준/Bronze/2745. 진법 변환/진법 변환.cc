#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int n;
    std::cin>>str>>n;
    
    int res=0;
    for(int i=0; i<str.size(); i++)
    {
        res=res*n+(str[i]<'A' ? str[i]-'0' : str[i]-'A'+10);
    }
    std::cout<<res;
    return 0;
}