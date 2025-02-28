// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string str;

int arr[200]={};

string ans;
int flag;
char mid;

int main() {
    
    std::cin>>str;

    
    for(char a : str) arr[a]++;
    
    for(int i='z'; i>='A'; i--)
    {
        if(arr[i])
        {
            if(arr[i] & 1)
            {
                mid = char(i); flag++;
                arr[i]--;
            }
            
            if(flag == 2) break;
            for(int j=0; j<arr[i]; j+=2)
            {
                ans=char(i)+ans;
                ans+=char(i);
            }
        }
    }
    
    if(mid) ans.insert(ans.begin()+ans.size()/2,mid);
    if(flag == 2) cout<<"I'm Sorry Hansoo\n";
    else cout<<ans<<'\n';
    
    return 0;
}