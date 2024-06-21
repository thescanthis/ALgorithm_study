#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int a[26]={};
    string str[50];
    
    for(int i=0; i<50; i++)
    {
        //'\n'을기준으로 input값을 불러옴
        getline(cin,str[i]);
        for(int j=0; j<str[i].size(); j++) a[str[i][j]-97]++;
    }
    
    int _max=-1;
    for(int i=0; i<26; i++) if(_max<=a[i]) _max=a[i];
    
    for(int i=0; i<26; i++)
    {
        if(_max==a[i])
        {
            cout<<(char)(i+97);
        }
    }
    return 0;
}