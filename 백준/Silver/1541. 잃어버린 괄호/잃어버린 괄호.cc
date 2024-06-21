#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    
    string temp="";
    int ans=0;
    bool x_o=false;
    
    for(int i=0; i<=s.size(); i++)
    {
       if(s[i]=='-'||s[i]=='+'||s[i]=='\0')
       {
           if(x_o) ans-=stoi(temp); 
           else ans+=stoi(temp);
           temp="";
           
           if(s[i]=='-') x_o=true;
           continue;
       }
       temp+=s[i];
    }
    cout<<ans;
    return 0;
}