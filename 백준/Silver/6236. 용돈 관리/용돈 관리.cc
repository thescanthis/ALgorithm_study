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

ll n, k;
ll lo, hi;
ll ret = 0,Mx;
int arr[100001] = {};

bool check(ll mid)
{
	if (Mx > mid) return false;

	int cnt = 0;
	ll temp = mid;
	for (int i = 0; i < n; i++)
	{
		if (temp - arr[i] < 0)
		{
			temp = mid;
			cnt++;
		}
		
		temp -= arr[i];
	}

	if (mid != temp) cnt++;

	return cnt <= k;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		hi += arr[i];
		Mx = max(Mx, (ll)arr[i]);
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
