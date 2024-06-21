#include <iostream>
using namespace std;


int len(int n)
{
    int len=0;
    while(n) {len++; n/=10;}
    return len;
}
int getLength(int n)
{
    int length=len(n),i,m=1,res=0;
    for(i=1; i<length; i++) {res+=9*m*i; m*=10;}
    res+=(n-m+1)*i;
    return res;
}

int main(void)
{
    int n,m;
    cin>>n>>m;
    
    if(getLength(n)<m) cout<<-1; //최대 길이보다 긴경우
    else
    {
        //전개되는 숫자의 자릿수
        //1,10,100으로 전개
        //해당 자릿수에서 시작되는 순서
        //해당 자릿수에서 끝나는 순서
        long l=0,k=0,s=0,e=0;
        do{
            l++; k=(k==0) ? 1 : k*10;
            s=e; e+=9*k*l;
        }while(m>e);
        //k번째 전에 시작되는 자릿수의 위치
        
        //k번째가 포함된 숫자
        //num에서 k번째 해당하는 숫자는 몇번ㅉ인가.
        int num=k+(m-s)/l, index=(m-s)%l;
        if(index==0){num-=1;index=l;}
        
        //num에서 index번째 숫자찾기
        int res=0;
        do{res=num/k; num-=res*k;k/=10;}
        while(--index);
        cout<<res;
    }
    return 0;
}