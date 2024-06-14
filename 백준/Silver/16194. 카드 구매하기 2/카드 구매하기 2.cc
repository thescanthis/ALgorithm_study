#include <iostream>
#define MAX_SIZE 1001
using namespace std;

int n;
int arr[MAX_SIZE]={};
int DP[MAX_SIZE]={};

void input()
{
    for(int i=1; i<=n; i++)
    {
        std::cin>>arr[i];
    }
}

void solution()
{
    input();
    DP[1]=arr[1];
    for(int i=2; i<=n; i++)
    {
        DP[i]=arr[i];
        for(int j=1; j<=i; j++)
        {
            DP[i]=std::min(DP[i],DP[i-j]+arr[j]);
        }
    }
    std::cout<<DP[n];
}

int main() {
    std::cin>>n;
    solution();
    return 0;
}