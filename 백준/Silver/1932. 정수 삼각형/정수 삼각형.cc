#include <iostream>
#include <algorithm>
int main(void)
{
   int n;
   std::cin>>n;
   
   int arr[n+1][n+1]={};
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<i+1; j++){
           std::cin>>arr[i][j];
       }
   }
   
   for(int i=n-1; i>=1; i--){
       for(int j=0; j<i; j++){
           arr[i-1][j]+=std::max(arr[i][j],arr[i][j+1]);
       }
   }
   std::cout<<arr[0][0];
    return 0;
}