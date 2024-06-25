#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reset(vector<int>&v,int n)
{
    for(int i=0; i<n; i++)
    {
        int temp; cin>>temp;
        v.emplace_back(temp);
    }
}


int main(void)
{
    int n;
    cin>>n;
    vector<int>v;
    reset(v,n);
    sort(v.begin(),v.end());
    int x; cin>>x;
    int start=0;
    int end=v.size()-1;
    int cnt=0;
    int index=0;
    
    while(1)
    {
        if(v[start]+v[end]<x)
        {
            start+=1;
        }
        else if(v[start]+v[end]==x)
        {
            index++;
            start=index;
            end-=1;
            cnt++;
        }
        if(v[start]+v[end]>x) end--;
        if(start==end+1||start==end) break;
    }
    cout<<cnt;
    return 0;
}