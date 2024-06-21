#include <iostream>

int main(void)
{
    int n;
    std::cin>>n;
    int v=1;
    int cnt=0;
    int _n=n;
    for(int i=1; i<=n; i++)
    {
       if(_n>=v){
           _n-=v;
           v++;
           cnt++;
       }
       
       if(_n<v){
           v=1;
           _n-=v;
           v++;
           cnt++;
       }
       if(_n==0) break;
       
    }
    
    std::cout<<cnt+_n;
    return 0;
}