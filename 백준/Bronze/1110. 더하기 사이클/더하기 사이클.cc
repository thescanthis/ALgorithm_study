#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    
    int x_1=x;
    int x_2=x;
    int cnt=0;
    while(0<=99)
    {
       x_1=x_1%10+x_1/10;
       x_1%=10;
       x_2%=10;
       x_2=(x_2*10)+(x_1);
       x_1=x_2;
       
       cnt++;
       if(x_2==x) break;
    }
    cout<<cnt;
    return 0;
}