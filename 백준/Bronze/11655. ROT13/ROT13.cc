#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string str;
    getline(cin,str);
    
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            int Range = (str[i]+13);
            
            if(Range>'z')
            {
                Range%='z';
                Range+='a'-1;
            }
            str[i]=Range;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            int Range = (str[i]+13);
            
            if(Range>'Z')
            {
                Range%='Z';
                Range+='A'-1;
            }
            str[i]=Range;
        }
    }
    
    cout<<str;
    return 0;
}