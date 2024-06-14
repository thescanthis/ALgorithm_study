#include <iostream>
#define MAX 1000001
using namespace std;

int main(void)
{
    int n;
    std::cin>>n;
    
    int arr[MAX]={};
    
    for(int i=2; i<=n; i++)
    {
        arr[i]=arr[i-1]+1;
        
        if(i%2==0) arr[i]=min(arr[i],arr[i/2]+1);
        if(i%3==0) arr[i]=min(arr[i],arr[i/3]+1);
    }
    std::cout<<arr[n];
    return 0;
}