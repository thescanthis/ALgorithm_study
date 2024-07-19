#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int n;
   std::cin>>n;
   int dp[1000]={};
   dp[1]=1;
   dp[2]=2;
   
   for(int i=3; i<=n; i++)
   {
       dp[i]=(dp[i-1]+dp[i-2])%10007;
   }
   cout<<dp[n];
}