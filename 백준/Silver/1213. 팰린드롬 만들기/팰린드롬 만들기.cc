#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    
    stack<char> l,r;
    char center=0;
    for(int i=0; i<s.size();)
    {
        if(s[i]==s[i+1]){l.push(s[i]);r.push(s[i+1]); i+=2;}
        else
        {
            //첫번째 등장하는 홀수 갯수의 문자이다.
            //나중에 중앙에 위치해야 하기때문에 기억해둔다.
            if(center=='\0') {center=s[i]; i++;}
            else
            {
                // 홀수 갯수의 문자가 2번째 등장하는 상황이다.
                //절대로 펠린드룸 문자가 될 수 없다.
                cout<<"I'm Sorry Hansoo";
                return 0;
            }
        }
    }
    if(center!='\0') r.push(center);
    while(!l.empty()){r.push(l.top());l.pop();}
    while(!r.empty()) {cout<<r.top();r.pop();}
    return 0;
}