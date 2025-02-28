// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void Init(int n,vector<string>& v)
{
    for(int i=0; i<n; i++)
    {
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    map<string,int> Pk;
    vector<string> VPk;
    for(int i=0; i<n; i++)
    {
        string temp;
        cin>>temp;
        VPk.push_back(temp);
        Pk[temp]=i+1;
    }
    
    vector<string> FindPk;
    Init(m,FindPk);
    
    for(int i=0; i<FindPk.size(); i++)
    {
        if(FindPk[i][0]>='0' && FindPk[i][0]<='9')
        {
            int idx = stoi(FindPk[i])-1;
            cout<<VPk[idx]<<'\n';
        }
        else{
            cout<<Pk[FindPk[i]]<<'\n';
        }
    }
    return 0;
}