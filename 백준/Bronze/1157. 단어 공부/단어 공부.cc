#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[1000001];
    int arr1[27];
    
    scanf("%s", arr);
    int len=strlen(arr);
    
    for(int i=0;arr[i]!='\0'; i++)
    {
        if('a'<=arr[i]) arr[i]=arr[i]-32;
        arr1[arr[i]-'A']++;//알파벳A-Z까지 순서대로 arr1[i]에 ++함.
    }
    
    int max=0; char a='?';
    
    for(int i=0; i<='Z'-'A'; i++)
    {
        if(arr1[i]>max)
        {
            max=arr1[i];
            a=i;
        }
        else if(arr1[i]==max)
        {
            a='?';
        }
    }
    printf("%c", (a=='?')? '?':a+'A');
    return 0;
}