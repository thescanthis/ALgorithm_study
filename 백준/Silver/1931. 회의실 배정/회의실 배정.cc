#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.emplace_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    int temp=v[0].first;
    int cnt=1;
    for(int i=1; i<n; i++)
    {
       if(temp<=v[i].second)
       {
           cnt++;
           temp=v[i].first;
       }
    }
    cout<<cnt;
    return 0;
}