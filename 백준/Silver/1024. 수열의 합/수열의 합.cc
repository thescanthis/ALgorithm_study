#include<iostream>
using namespace std;

int main(void)
{
    //n=(x+1)+(x+L);
    //n=Lx+L*(L+1)/2;등차수열을 이룰때
    //n=n-(L*(L+1)/2)가 L로 떨어지면 x+1 부터 x+L까지 출력하면된다는것임.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,l;
    cin>>n>>l;
    
    int x=l;
    for(; x<=100; x++)
    {
        int temp=n-(x*(x+1)/2);
        if(temp%x==0)
        {
            int j=temp/x+1;
            if(j>=0)
            {
                for(int k=0; k<x; k++)
                {
                    cout<<k+j<<" ";
                }
                //여기서 값이 나왔으면 그 값중 길이가 작은값을 출력후 return
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}