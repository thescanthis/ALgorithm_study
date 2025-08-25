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

int n, m;
int ret, idx,temp;
vector<pair<int, int>> v;

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second <= idx) continue;
		if (idx < v[i].first)
		{
			temp = (v[i].second - v[i].first) / m + ((v[i].second - v[i].first) % m ? 1 : 0);
			idx = v[i].first + temp * m;
		}
		else {
			temp = (v[i].second-idx) / m + ((v[i].second -idx)%m ? 1 : 0);
			idx = idx + temp * m;
		}

		ret += temp;
	}

	cout << ret;
	return 0;
}
