//큐는 시작지점과 끝지점이 존재함. 스택은 끝지점만 존재함.
#include<stdio.h>
#include<string.h>
#define SIZE 10005

typedef struct{
    int arr[SIZE];
    int front;
    int back;
}Q;

void start(Q* p)// 시작지점을 초기화.
{
    p->front=p->back=0;
}
void push(Q* p,int v)//back을 먼저 구현한후 pop에서 front를 하나씩 출력 받는게 좋은듯..?
{
    p->arr[p->back]=v;
    p->back=(p->back+1)%SIZE;//+1을 해서 만약 배열의 크기가 넘어갈 경우 몫으로 나눠서 안넘어가게함.
}
int empty(Q* p)
{
    return (p->front==p->back);
}

int pop(Q* p)
{
    if(empty(p)) return -1;
    int res=p->arr[p->front];
    p->front=(p->front+1)%SIZE;
    return res;
}
int size(Q* p)
{
    return (p->back>=p->front) ? (p->back-p->front):SIZE+p->back-p->front;
}
int front(Q* p)
{
    if(empty(p)) return -1;
    return p->arr[p->front];
}
int back(Q* p)
{
    if(empty(p)) return -1;
    return (p->arr[p->back-1]);
}

int main(void)
{
    Q q;
    int n;
    scanf("%d", &n);
    start(&q);
    for(int i=1; i<=n; i++)
    {
        char s[6];
        scanf("%s", s);
        if(strcmp(s,"push")==0)
        {
            int z;
            scanf("%d", &z);
            push(&q,z);
        }
        else if(strcmp(s,"pop")==0)
        {
            printf("%d\n", front(&q));
            pop(&q);
        }
        else if(strcmp(s,"size")==0)
        {
            printf("%d\n", size(&q));
        }
        else if(strcmp(s,"front")==0)
        {
            printf("%d\n", front(&q));
        }
        else if(strcmp(s,"back")==0)
        {
            printf("%d\n", back(&q));
        }
        else if(strcmp(s,"empty")==0)
        {
            printf("%d\n", empty(&q));
        }
    }
    return 0;
}