#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    int num,cnt=0;
    int i;
    while(n--)
    {
        cin>>num;
        for(i=2; i<num; i++)
        {
            if(num%i==0) break;
        }
        if(i==num) cnt++;
    }
    cout<<cnt;
    return 0;
}