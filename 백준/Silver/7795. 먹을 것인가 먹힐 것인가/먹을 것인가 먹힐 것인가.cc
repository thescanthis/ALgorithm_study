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
using ll = long long;

int t;

void RSort(std::vector<int>& v)
{
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		vector<int> v(n),v1(m);

		for (int j = 0; j < n; j++)
			cin >> v[j];
		
		for (int j = 0; j < m; j++)
			cin >> v1[j];

		RSort(v);
		RSort(v1);
	
		int cnt = 0;
		for (int j = 0; j < v.size(); j++)
		{
			for (int k = 0; k < v1.size(); k++)
			{
				if (v[j] > v1[k])
				{
					cnt += v1.size()-k;
					break;
				}
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}