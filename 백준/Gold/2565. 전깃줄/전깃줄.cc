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

int n;
int arr[104] = {};
int len = 0;
vector<pair<int, int>> v;

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int y, x;
		cin >> y >> x;
		v.push_back({ y,x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		auto lowerPos = lower_bound(arr, arr + len, v[i].second);

		if (lowerPos == arr + len) len++;
		*lowerPos = v[i].second;
	}

	cout << v.size() - len;
	
	return 0;
}
