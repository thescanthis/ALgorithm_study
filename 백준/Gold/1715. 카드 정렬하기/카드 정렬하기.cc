#include <iostream>
#include <queue>

#define MAX_SIZE 100000

int n;
int arr[MAX_SIZE];
void Input()
{
    for(int i=0; i<n; i++) std::cin>>arr[i];
}

void Answer()
{
    std::priority_queue<int>q;
    for(int i=0; i<n; i++) q.push(-arr[i]);
    
    int ans=0;
    int Ans_cnt=0;
    while(q.empty()==0)
    {
        if(Ans_cnt==n-1) break;
        int x=q.top(); q.pop();
        int y=q.top(); q.pop();
        ans=ans+(x+y);
        q.push((x+y));
        Ans_cnt++;
    }
    std::cout<<-ans;
}

void Solution()
{
    Input();
    Answer();
}

int main() {
   
   std::cin>>n;
   Solution();
   return 0;
}