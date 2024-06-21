#include<stdio.h>

int main(void)
{
   int i,x;
   int t=0,n=0,b=0;
   scanf("%d", &x);
   int sum=0;
   for(i=1; i <= x; i++)
   {
       sum+=i;
       if(sum>=x) break;
   }
   sum-=i;
   t=x-sum;
   if(i%2==0)
   {
       n=t;
       b=(i-t)+1;
   }
   else
   {
       b=t;
       n=(i-t)+1;
   }
   printf("%d/%d", n, b);
}