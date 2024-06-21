#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<= n; i++)
    {
        if(i<=99)
       {
          count++;
       }
       else if(i<=999)
          {
              int num=i%10;   //1의자리수
              int num1=(i%100)/10;  //10의자리수
              int num2=i/100;//100의자리수
            if(num2-num1==num1-num) 
            //자릿수는 순서대로정열. 하지만 현재상태에선 이게 무엇을 뜻하는지는 모르겠음...
            //100의자리수-10의자리수==10의자리수-1의자리수가 같을때 count++한다.
            //즉 저경우 등차수열을 이룬다면 count에 ++하겠다라는 말 같음
            {
                count++;
            }
          }
    }
    printf("%d", count);
    return 0;
}