#include <iostream>
#include <cstring>
#include <stack>

void StackInput(std::stack<char>& s)
{
    while(!s.empty())
    {
        std::cout<<s.top();
        s.pop();
    }
}

int main(void)
{
    std::stack<char>st;
    std::string str;
    std::getline(std::cin,str);
    
   for(int i=0; i<str.size(); i++)
   {
       if(str[i]=='<')
       {
           StackInput(st);
           while(1)
           {
               std::cout<<str[i];
               if(str[i]=='>') break;
               i++;
           }
       }
       else if(str[i]==' ')
       {
           StackInput(st);
           std::cout<<" ";
       }
       else st.push(str[i]);
   }
   
   StackInput(st);
    return 0;
}