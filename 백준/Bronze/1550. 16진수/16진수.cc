#include<iostream>
using namespace std;

int main(void)
{
    int ans=0;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        ans*=16;
        if(s[i]>='0'&&s[i]<='9')
        {
            ans+=s[i]-'0';
        }
        else
        {
            ans+=s[i]-55;
        }
    }
    cout<<ans;
    return 0;
}