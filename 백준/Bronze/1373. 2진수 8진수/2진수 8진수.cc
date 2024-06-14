#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int temp;
    string ans="";
    for(int i=0; i<s.size(); i+=3)
    {
        temp=0;
        for(int j=i; j<i+3; j++)
        {
           int x=s[j]-'0';
           if(x>=0)
           {
               int a=j%3;
               if(x==1)
               {
                   temp+=a*2;
                   if(a==0)
                   {
                       temp+=1;
                   }
               }
           }
        }
        ans+=temp+'0';
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}