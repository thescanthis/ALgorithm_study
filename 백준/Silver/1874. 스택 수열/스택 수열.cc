#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    int arr[100001]={};
    vector<int>v;
    vector<char>s;
    
    int cnt=0;
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=1; i<=n; i++)
    {
        v.emplace_back(i);
        s.emplace_back('+');
        
        while(!v.empty()&&v.back()==arr[cnt])
        {
            v.pop_back();
            s.emplace_back('-');
            cnt++;
        }
    }
    
    if(v.size()!=0) cout<<"NO";
    else{
        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i]<<'\n';
        }
    }
    return 0;
}