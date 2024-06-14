#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    
   int E,S,M;
   E=S=M=1;
   
   int e,s,m;
   std::cin>>e>>s>>m;
   
   int cnt=1;
   while(1)
   {
       if(E==e&& S==s && M==m) break;
       E = (E%15)+1;
       S = (S%28)+1;
       M = (M%19)+1;
       cnt++;
   }
   
   cout<<cnt;
    return 0;
}