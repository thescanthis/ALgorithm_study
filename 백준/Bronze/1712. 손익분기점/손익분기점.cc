#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int sum1=0,sum2=0, sum3=0;
    sum3=(c-b?c-b:1);
    sum2=a/((sum3))+1;
    sum1=(c-b)*(sum2);
    if(a < sum1)
    {
        
        printf("%d", sum2);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}