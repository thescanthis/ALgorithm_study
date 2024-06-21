#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
    string str;
    vector<pair<int,int>> v;
    for(int i=0; i<3; i++)
    {
        cin>>str;
        if(str=="black") v.push_back(make_pair(0,1));
        else if(str=="brown") v.push_back(make_pair(1,10));
        else if(str=="red") v.push_back(make_pair(2,100));
        else if(str=="orange") v.push_back(make_pair(3,1000));
        else if(str=="yellow") v.push_back(make_pair(4,10000));
        else if(str=="green") v.push_back(make_pair(5,100000));
        else if(str=="blue") v.push_back(make_pair(6,1000000));
        else if(str=="violet") v.push_back(make_pair(7,10000000));
        else if(str=="grey") v.push_back(make_pair(8,100000000));
        else if(str=="white") v.push_back(make_pair(9,1000000000));
    }
    long int a=0,b=0,c=0;
    for(int i=0; i<3; i++)
    {
        if(i==0) a=v[i].first;
        if(i==1) b=v[i].first;
        if(i==2) c=v[i].second;
    }
    auto ans=(a*10+b)*c;
    cout<<ans;
    return 0;
}