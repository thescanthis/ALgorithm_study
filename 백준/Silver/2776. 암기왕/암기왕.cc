#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <limits.h>
using namespace std;
#define ARRSIZE 301

int t;

bool Binary(int x, vector<int>& v)
{
	int start = 0, end = v.size()-1;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (x < v[mid])
		{
			end = mid - 1;
		}
		else if(x > v[mid]){
			start = mid + 1;
		}
		else {
			return true;
		}
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int j = 0; j < n; j++) cin >> v[j];
		sort(v.begin(), v.end());

		int m;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			int temp;
			cin >> temp;
			bool check = Binary(temp, v);
			cout << check << '\n';
		}
	}

	return 0;
}