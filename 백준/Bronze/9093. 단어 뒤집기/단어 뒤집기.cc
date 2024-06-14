#include <iostream>
#include <cstring>
#include <stack>
#define MS 1001
using namespace std;

int main() {
    int n;
    std::cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string str;
        getline(cin,str);
        stack<char>s;
        str+=" ";
        for(int j=0; j<str.size(); j++)
        {
            if(str[j]!=' ') s.push(str[j]);
            else
            {
                while(!s.empty())
                {
                    cout<<s.top();
                    s.pop();
                }
                if(j !=str.size()-1)
                    cout<<" ";
            }
        }
        cout<<'\n';
    }
    
    return 0;
}