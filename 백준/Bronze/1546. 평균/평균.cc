#include<stdio.h>

int main(void)
{
    double n,i;
    double array[1001];
    double sum=0;
    double max=0;
    scanf("%lf", &n);
    
    for(int i=1; i<=n; i++)
    {
        scanf("%lf", &array[i]);
        sum+=array[i];
        if(array[i] > max)
        {
            max=array[i];
        }
        
    }
    printf("%lf\n", float((sum/max)*100)/n);
}