#include <iostream>
using namespace std;

class DP
{
    private:
    int _n;
    int arr[100001]={};
    public:
    void reset(int& n)
    {
        cin>>n;
        _n=n;
    }
    int min(int a,int b)
    {
        return (a<b) ? a : b;
        
    }
    void ans()
    {
        for(int i=1; i<=_n; i++)
        {
            arr[i]=i;
            for(int j=1; j*j<=i; j++)
            {
                arr[i]=min(arr[i],arr[i-j*j]+1);
            }
        }
        cout<<arr[_n];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    DP dp;
    dp.reset(n);
    dp.ans();
    
    return 0;
}