#include<iostream>
using namespace std;
#define Min(a,b) a < b ? a : b
int main(void)
{
    int x,y;
    cin>>x>>y;
    char arr[50][50];
    
    for(int i=0; i<x; i++) cin>>arr[i];
    
    int ans=100;
    int B=0,W=0;
    for(int i=0; i<x-7; i++){
        for(int j=0; j<y-7; j++){
            B=0;W=0;
            for(int a=i; a<i+8; a++){
                for(int b=j; b<j+8; b++){
                    if((a+b)%2==0){
                        if(arr[a][b]=='B') W++;
                        else B++;
                    }
                    else{
                        if(arr[a][b]=='B') B++;
                        else W++;
                    }
                }
            }
            ans=Min(B,ans);
            ans=Min(W,ans);
        }
    }
    cout<<ans;
    return 0;
}