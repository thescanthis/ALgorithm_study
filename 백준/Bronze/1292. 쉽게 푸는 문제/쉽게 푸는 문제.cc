#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    int count=0;
    int min=0;
    int sum=0;
    for(int i=1; i<= b; ++i, count++)
    {
        if(count >= min)
        {
            count=0;  //초기화시키면 같은 값이 중복이안되는걸로 추정.
            min++;    //++했기때문에 1부터시작임, 그래서 중복을 제외하고 1,2,3,4;가 출력됨.
        }
        if(i >= a) //7 >= 3일때 3,4,5,6,7번째의 번호를 묻는거야.
        {
            sum+=min;
        }
    }
    printf("%d", sum);
    return 0;
}