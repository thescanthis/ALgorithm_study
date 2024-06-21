#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[10001];
    char b[10001];
    
    scanf("%s %s",a,b);
    
    int len[2]={0,0};
    len[0]=strlen(a);
    len[1]=strlen(b);
    
    long long  int ans=0;
    
    for(int i=0; i<len[0]; i++)
    {
        for(int j=0; j<len[1]; j++)
        {
            int sum=a[i]-'0';
            int sum1=b[j]-'0';
            int ex=sum*sum1;
            ans+=ex;
        }
    }
    printf("%lld", ans);
    
    return 0;
}