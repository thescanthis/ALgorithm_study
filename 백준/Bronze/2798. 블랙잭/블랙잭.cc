#include<iostream>
using namespace std;

int main(void)
{
    int x,sum;
    cin>>x>>sum;
    
    int* p=(int*) new int[x];
    for(int i=0; i<x; i++) cin>>p[i];
    int temp=0;
    int ans=0;
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<i; j++)
        {
            for(int k=0; k<j; k++)
            {
                if(p[i]!=p[j]&&p[i]!=p[k]&&p[j]!=p[k])
                {
                    temp=p[i]+p[j]+p[k];
                    
                    if(temp<=sum)
                    {
                        if(ans<temp) ans=temp;
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}