#include <iostream>
#include <vector>
#define MAX_SIZE 1000001
using namespace std;

bool arr[MAX_SIZE]={};
void PrimeNum()
{
    for(int i=2; i<=MAX_SIZE; i++)
    {
        if(arr[i]) continue;
        for(int j=2*i; j<=MAX_SIZE; j+=i)
        {
            arr[j]=true;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    PrimeNum();
    while(true)
    {
        int n;
        std::cin>>n;
        if(n==0) break;
        
        int a,b;
        for(int i=3; n-i>0; i++)
        {
            if(!arr[i] && !arr[n-i])
            {
                a=i;
                b=n-i;
                break;
            }
        }
        if(a+b==n)
        {
            printf("%d = %d + %d\n",n,a,b);
        }
        else{
            std::cout<<"Goldbach's conjecture is wrong."<<'\n';
        }
    }
    return 0;
}