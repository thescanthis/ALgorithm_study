#include <iostream>
#include <string>


int main(void)
{
    std::string str;
    std::cin>>str;
    
    int cnt=0;
    
    for(int i=0; i<str.size(); i++) if(str[i]!=str[i+1]) cnt++;
    std::cout<<cnt/2;
    
    return 0;
}