#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 8



int main(void)
{
    char** p;
    p=(char**)malloc(sizeof(char*)*N);
    p[0]=(char*)malloc(sizeof(char)*N*N);
    for(int i=1; i<N; i++)
    {
        p[i]=p[i-1]+N;
    }
    
    int cnt=0;
    for(int i=0; i<N; i++)
    {
        scanf("%s", p[i]);
        for(int j=0; j<N; j++)
        {
            if(i%2==0)
            {
                if(j%2==1)
                {
                    p[i][j]=1;
                }
                
                if(p[i][j]==70) cnt++;
            }
            else
            {
                if(i%2==1)
                {
                    if(j%2==0)
                    {
                        p[i][j]=1;
                    }
                    if(p[i][j]==70) cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
   free(p);
   free(p[0]);
    return 0;
}