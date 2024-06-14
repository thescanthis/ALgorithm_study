#include <iostream>
#include <cstring>
#define SIZE 10005
using namespace std;

typedef struct{
    int arr[SIZE];
    int index;
}Stack;


void start(Stack* s){
    s->index=-1;
}

void push(Stack* s,int v){
    s->arr[++s->index]=v;
}

int size(Stack* s){
    return (s->arr[SIZE]+1);
}
int top(Stack* s){
    return (s->arr[s->index]);
}
int empty(Stack* s){
    return (s->index==-1);
}
int pop(Stack* s){
    return (s->index--);
}

int main(void)
{
    Stack s;
    int n; cin>>n;
    
    start(&s);
    for(int i=0; i<n; i++){
        char o[6];
        cin>>o;
        
        if(strcmp(o,"push")==0){
            int x; cin>>x;
            push(&s,x);
        }
        else if(strcmp(o,"size")==0){
            cout<<size(&s)<<'\n';
        }
        else if(strcmp(o,"pop")==0){
            if(empty(&s)) cout<<-1<<'\n';
            else{
                cout<<top(&s)<<'\n';
                pop(&s);
            }
        }
        else if(strcmp(o,"top")==0){
            if(empty(&s)) cout<<-1<<'\n';
            else cout<<top(&s)<<'\n';
        }
        else if(strcmp(o,"empty")==0){
            cout<<empty(&s)<<'\n';
        }
    }
    return 0;
}