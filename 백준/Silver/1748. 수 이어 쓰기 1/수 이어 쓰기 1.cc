#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    
    
    int n;
    std::cin>>n;
    int ans = 0;
    if(n<10) ans =n;
    else{
        
        int max =100'000'000;
        int v=9;
        int temp = 1;
        bool check = false;
        while(n!=0)
        {
            if(n>=max)
            {
                check =true;
                int _n = n-max;
                ans+= v*(_n+temp);
                n-=_n;
            }
            
            if(check) temp=0;
            max/=10;
            v--;
        }
    }
    
    cout<<ans;
    return 0;
}