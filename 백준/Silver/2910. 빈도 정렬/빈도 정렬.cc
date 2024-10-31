#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;


int main(void)
{
	int n, m;
	cin >> n >> m;

	map<int, int> mp;
	map<int, int> mp1;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		mp[temp]++;
		if (mp1.find(temp) == mp1.end())
		{
			mp1[temp] = i;
		}
	}

	for (auto x : mp)
	{
		int _max = 0;
		int key = 0;
		int idx = 0;
		for (auto y : mp)
		{
			if (_max < y.second)
			{
				_max = y.second;
				key = y.first;
				idx = mp1[y.first];
			}

			else if (_max == y.second)
			{
				if (idx > mp1[y.first])
				{
					idx = mp1[y.first];
					key = y.first;
				}
			}
		}

		for (int i = 0; i < _max; i++)
		{
			cout << key << " ";
		}
		mp[key] = -1;
	}

	return 0;
}