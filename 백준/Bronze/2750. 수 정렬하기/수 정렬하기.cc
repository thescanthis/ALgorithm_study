#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void info(vector<int> &v)
{
    for(auto x : v) cout<<x<<'\n';
}

int main(void)
{
    int n;
    cin>>n;
    
    vector<int> v;
    v.resize(n);
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    info(v);
    return 0;
}