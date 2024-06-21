#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //priority_queue
    priority_queue<int,vector<int>,greater<int>>q;//greater은 최소값 우선,less최대값 우선
    //or priority_queue<int>q;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int num; cin>>num;
        
        switch(num)
        {
            case 0:
            if(q.size()){
                cout<<q.top()<<'\n';
                q.pop();
            }
            else cout<<0<<'\n';
            break;
            default:
            q.push(num);break;
        }
    }
    return 0;
}