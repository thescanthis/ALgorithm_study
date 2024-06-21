#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    set<pair<int,string>> s;
    int temp;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        temp=0;
        for(int i=0; i<str.size(); i++)
        {
            temp++;
        }
        s.emplace(temp,str);
    }
    
    for(auto x:s)
    {
        cout<<x.second<<'\n';
    }
    return 0;
}