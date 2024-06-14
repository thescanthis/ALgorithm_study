#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main(void)
{
    int n;
    cin>>n;
    int arr[101]={};
    
    
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        for(int j=0; j<temp; j++)
        {
            cin>>arr[j];
        }
        long long int ans=0;
        for(int j=0; j<temp; j++){
            for(int k=j+1; k<temp; k++){
                ans+=GCD(arr[j],arr[k]);
            }
        }
        cout<<ans;
        cout<<'\n';
    }
    return 0;
}