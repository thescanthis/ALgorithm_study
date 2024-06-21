#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char arr[51][51];
    char res[51]={};
    
    for(int i=0; i<n; i++)
    {
        scanf("%s", arr[i]);
    }
    
    int len=strlen(arr[0]);
    memcpy(res,arr[0],len);
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j][i]!=arr[j+1][i])
            {
                res[i]='?';
            }
        }
    }
    printf("%s", res);
    return 0;
}