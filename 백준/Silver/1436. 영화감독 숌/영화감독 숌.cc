#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    int cnt=1;
    int x=666;
    
    while(1)
    {
        if(n==cnt) break;
        x++;
        int num=x;
        int v=0;
        while(num)
        {
            int temp=num%10;
            if(temp==6) v++;
            else if(v<3) v=0;
            num/=10;
        }
        if(v>=3) cnt++;
    }
    cout<<x;
    return 0;
}