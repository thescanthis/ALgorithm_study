#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    string s;
    string cpoys="";
    vector<string>v;
    vector<string>v1;
    while(1)
    {
        cin>>s;
        if(s=="0") break;
        v.emplace_back(s);
        v1=v;
    }
    string temp;
    for(int i=0; i<v.size(); i++)
    {
        temp="";
        for(int j=v[i].size()-1; j>=0; j--){
            temp+=v1[i][j];
        }
        if(v[i]==temp) cout<<"yes";
        else cout<<"no";
        cout<<'\n';
    }
    return 0;
}