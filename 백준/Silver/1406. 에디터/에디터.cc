#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

char a[600005]; 

int main(void)
{
    scanf("%s", a);
    stack<char> left,right;
    int n=strlen(a);
    for(int i=0; i<n; i++){
        left.push(a[i]);
    }
    int m;
    scanf("%d", &m);
    while(m--){
        char w;
        scanf(" %c", &w);
        if(w=='L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(w=='D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(w=='B'){
            if(!left.empty()){
                left.pop();
            }
        }
        else if(w=='P'){
            char c;
            scanf(" %c",&c);
            left.push(c);
        }
    }
    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        printf("%c", right.top());
        right.pop();
    }
    return 0;
}