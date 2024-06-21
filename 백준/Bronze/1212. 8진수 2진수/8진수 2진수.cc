#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    
    string x="";
    for(int i=s.size()-1; i>=0; i--)
    {
        int temp=s[i]-'0';
        for(int j=2; j>=0; j--)
        {
           if(temp%2==0) x+='0';
           else x+='1';
           temp/=2;
        }
    }
    reverse(x.begin(),x.end());
    if(s[0]=='1') x.erase(x.begin(),x.begin()+2);
    else if(s[0]=='2'||s[0]=='3') x.erase(x.begin());
    if(s=="0") x="0";
    cout<<x;
    return 0;
}