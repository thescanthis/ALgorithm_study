#include <iostream>
#include <deque>
using namespace std;

deque<int>d;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    string s;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>s;
        
        if(s=="push_back")
        {
            int v; cin>>v;
            d.push_back(v);
        }
        else if(s=="push_front")
        {
            int v; cin>>v;
            d.push_front(v);
        }
        else if(s=="size") cout<<d.size()<<'\n';
        else if(s=="empty") cout<<d.empty()<<'\n';
        else if(s=="front"){
            if(d.empty()) cout<<-1<<'\n';
            else {
                cout<<d.front()<<'\n';
            }
        }
        else if(s=="back"){
            if(d.empty()) cout<<-1<<'\n';
            else{
                cout<<d.back()<<'\n';
            }
        }
        else if(s=="pop_back"){
            if(d.empty()) cout<<-1<<'\n';
            else{
                cout<<d.back()<<'\n';
                d.pop_back();
            }
        }
        else if(s=="pop_front"){
            if(d.empty()) cout<<-1<<'\n';
            else{
                cout<<d.front()<<'\n';
                d.pop_front();
            }
        }
    }
    return 0;
}