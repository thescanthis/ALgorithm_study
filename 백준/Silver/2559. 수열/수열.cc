#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,m;
	std::cin>>n>>m;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	int MaxSum = -100000000;
	int sum = 0;
	for(int i=0; i<m; i++) sum+=v[i];
	
	if(MaxSum<sum) MaxSum = sum;
	
	for(int i=m; i<n; i++)
	{
		sum-=v[i-m];
		sum+=v[i];
		
		if(MaxSum<sum) MaxSum = sum;
	}
	
	cout<<MaxSum;
	return 0;
}
  
  