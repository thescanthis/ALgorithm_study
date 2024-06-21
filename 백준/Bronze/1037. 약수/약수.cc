#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
    int n;
    cin>>n;
    
    int *arr=(int*) new int [n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    
    int ans=arr[0]*arr[n-1];
    
    cout<<ans;
    return 0;
}