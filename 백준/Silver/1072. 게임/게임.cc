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
#include <cmath>
using namespace std;
#define ARRSIZE 301
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	ll X, Y;
	cin >> X >> Y;
	
	ll Z = (Y * 100LL) / X;
	if (Z >= 99) {
		cout << -1;
		return 0;
	}

	ll lo = 1, hi = 1000000000;
	ll ans = -1;
	while (lo <= hi)
	{
		ll mid = (lo + hi) / 2;
		ll diff = (100LL * (Y + mid) / (X + mid));

		if (diff>Z)
		{
			hi = mid - 1;
			ans = mid;
		}
		else {
			lo = mid + 1;
		}
	}

	cout << ans;
	return 0;
}