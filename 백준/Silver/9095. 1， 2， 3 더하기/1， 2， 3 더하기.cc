#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    std::cin>>n;
    int arr[100]={};
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=0; i<n; i++)
    {
        int temp;
        std::cin>>temp;
        
        for(int j=4; j<=temp; j++)
        {
            arr[j]=arr[j-3]+arr[j-2]+arr[j-1];
        }
        
        cout<<arr[temp]<<'\n';
    }
    
    return 0;
}
