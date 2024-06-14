#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<pair<int,int>>v;
    for(int i=0; i<=n; i++) v.push_back({i,m});
    
    int index=m;
    int copyN=n;
    cout<<"<";
    for(int i=0; i<copyN; i++)
    {
        cout<<v[index].first;
        if(i<copyN-1) cout<<", ";
        int move=v[index].second;
        v.erase(v.begin()+index);
        
        if(--n==0) break;
        index=(move>=1) ? index+(move-1) : n+(index+move)%n;
        index=index%n;
        if(index==0) index=n;
    }
    cout<<">";
    return 0;
}