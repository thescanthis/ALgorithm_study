#include <iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<string>s;
  
  int cnt;
  for(int i=0; i<n; i++)
  {
      string st; cin>>st;
      s.emplace_back(st);
  }
  
  for(int i=0; i<n; i++)
  {
      string ans="";
      cnt=0;
      for(int j=0; j<s[i].size(); j++)
      {
          if(s[i][j]=='(') cnt++;
          else if(s[i][j]==')') cnt--;
          
          if(cnt<0){
              ans="NO";
              break;
          }
          else if(j==s[i].size()-1){
              if(cnt==0) ans="YES";
              else ans="NO";
          }
      }
      cout<<ans<<'\n';
  }
  return 0;
}