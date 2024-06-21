#include<stdio.h>
#include<string.h>

int f(char* a,int len);

int main(void)
{
    int n;
    scanf("%d", &n);
    char arr[101];
    
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%s", arr);
        sum+=f(arr,strlen(arr));
    }
    printf("%d", sum);
    return 0;
}
int f(char* a,int len)
{
    int key=0;
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(a[i]==a[j])
            {
                key=j-i;
                
                if(key>1)
                if(a[j-1]!=a[j])
                return 0;
            }
        }
    }
    return 1;
}