#include <bits/stdc++.h>
using namespace std;

long long int Fn(long long int n)
{
	if(n==1 ||n==0) return 1;
	return n = n*Fn(n-1);
}

int main()
{
	long long int n;
	std::cin>>n;
	cout<<Fn(n);
}