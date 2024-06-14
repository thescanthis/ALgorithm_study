#include <iostream>
using namespace std;

int main() {
   int n;
   std::cin>>n;
   int dp[1001]={};
   
   dp[0]=dp[1]=1;
   
   
   for(int i=2; i<=n;i++)
   {
       dp[i]=(dp[i-1]+(dp[i-2]*2))%10007;
   }
   std::cout<<dp[n];
   
   return 0;
}