#include<stdio.h>

int rev(int n) //x,y에 대입시키는 수식.
{
    int r=0;
    while(n!=0)
    {
        r=r*10;
        r=r+n%10;
        n=n/10;
    }
    return r;
}
int main(void)
{
    int x,y,r;
    scanf("%d %d", &x,&y);
    r=rev(rev(x)+rev(y));
    printf("%d", r);
    return 0;
}