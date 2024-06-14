#include <iostream>
#include <stack>
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char>s;
    string str; cin>>str;
    
    int cnt=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='(') s.push(str[i]);
        else {
            s.pop();
            
            if(str[i-1]=='(') cnt+=s.size();
            else cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}