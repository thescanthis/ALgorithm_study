#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int n;
string str[51]={};
int ans=0;
void Input()
{
    cin>>n;
    for(int i=0; i<n; i++)
       cin>>str[i];
}


int NumCandy()
{
    int res=1;
    for(int i=0; i<n; i++)
    {
        int temp=1;
        for(int j=0; j<n-1; j++)
        {
            if(str[i][j+1] == str[i][j]) temp++;
            else{
                temp=1;
            }
            res = max(temp,res);
        }
    }
    
    for(int i=0; i<n; i++)
    {
        int temp=1;
        for(int j=0; j<n-1; j++)
        {
            if(str[j+1][i] == str[j][i]) temp++;
            else{
                temp=1;
            }
            res = max(temp,res);
        }
    }
    return res;
}



int main() {
  
   
   Input();
   
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n-1; j++)
       {
           swap(str[i][j+1],str[i][j]);
           ans = max(ans,NumCandy());
           swap(str[i][j+1],str[i][j]);
           
           swap(str[j+1][i],str[j][i]);
           ans = max(ans,NumCandy());
           swap(str[j+1][i],str[j][i]);
       }
   }
   
   cout<<ans;
   return 0;
}