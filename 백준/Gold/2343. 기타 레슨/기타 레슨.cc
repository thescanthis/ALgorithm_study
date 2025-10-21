// BigStone.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <string.h>
using namespace std;

using ll = long long;

int arr[100'001] = {};
int n, m;
ll Max = 0;
ll lo = 0, hi = 0;
ll ret = 0;

bool check(ll mid)
{
	if (Max > mid) return false;
	ll cnt = 0;
	ll temp = mid;
	for (int i = 0; i < n; i++)
	{
		if (mid - arr[i]< 0) {
			cnt++;
			mid = temp;
		}

		mid -= arr[i];
	}

	if (temp != mid) cnt++;
	return cnt <=m;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);


	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		Max = max(Max, (ll)arr[i]);

		hi += arr[i];
	}

	while (lo <= hi)
	{
		ll mid = (lo + hi) / 2;
		if (check(mid))
		{
			hi = mid - 1;
			ret = mid;
		}
		else {
			lo = mid + 1;
		}
	}

	cout << ret;
	return 0;
}
