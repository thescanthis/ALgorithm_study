#include <iostream>
#define MAX_SIZE 1000001
using namespace std;

bool arr[MAX_SIZE]={};
void PrimeNum()
{
    for(int i=0; i<MAX_SIZE; i++) arr[i]=true;
    
    for(int i=2; i<=MAX_SIZE; i++)
    {
        if(arr[i]==false) continue;
        for(int j=i*2; j<=MAX_SIZE; j+=i)
        {
            arr[j]=false;
        }
    }
}

int main() {
   
   ios_base::sync_with_stdio(NULL);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   std::cin>>n;
   
   PrimeNum();
   while(n--)
   {
       int tmp;
       std::cin>>tmp;
       int ans=0;
       for(int i=2; i<(tmp/2)+1; i++)
       {
           if(arr[i] && arr[tmp-i])
           {
               ans++;
           }
       }
       std::cout<<ans<<'\n';
   }
   
   
   
   return 0;
}