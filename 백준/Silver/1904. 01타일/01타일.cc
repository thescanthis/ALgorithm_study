#include <iostream>
using namespace std;

class DP
{
    private:
    int _n;
    int arr[1000001]={};
    
    public:
    void reset(int& n)
    {
        cin>>n;
        _n=n;
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
    }
    int DP_ans(int n)
    {
        for(int i=3; i<=n; i++)
        {
            arr[i]=(arr[i-1]+arr[i-2])%15746;
        }
        return arr[n];
    }
};

int main(void)
{
    int n;
    DP dp;
    dp.reset(n);
    cout<<dp.DP_ans(n);
    return 0;
}