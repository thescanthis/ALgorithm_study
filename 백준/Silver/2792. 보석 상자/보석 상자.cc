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

int arr[300'001] = {};
int n, m;
ll Max = 0;
ll ret = 0;
bool check(ll mid)
{
	if (mid == 0) return false;

	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		cnt += arr[i] / mid;
		if (arr[i] % mid != 0) cnt++;
	}

	return cnt<=n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);


	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		Max = max(ll(arr[i]), Max);
	}
	
	ll lo = 0, hi = Max;

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
