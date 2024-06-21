#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main(void)
{
    int n,m;
    cin>>n>>m;
    map<string, int>d;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        d[s]++;
    }
    int temp=0;
    set<string>str;
    for(int i=0; i<m; i++){
        string s;
        cin>>s;
        if(d.count(s)==1){
            str.emplace(s);
            temp++;
        }
    }
    cout<<temp<<'\n';
    for(auto x : str) cout<<x<<'\n';
    return 0;
}