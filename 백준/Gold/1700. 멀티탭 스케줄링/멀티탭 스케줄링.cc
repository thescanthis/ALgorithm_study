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

bool visited[104] = {};
int arr[104] = {};
vector<int> v;
int INF = 100001;
int cnt = 0;
int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < k; i++)
		cin >> arr[i];


	for (int i = 0; i < k; i++)
	{
		if (!visited[arr[i]])
		{
			if (v.size() == n) {

				int last_idx = 0, pos;
				for (int _a : v) {
					int here_pick = INF;

					for (int j = i+1; j < k; j++)
					{
						if (_a == arr[j]) {
							here_pick = j;
							break;
						}
					}

					if (last_idx < here_pick)
					{
						last_idx = here_pick;
						pos = _a;
					}
				}
				
				visited[pos] = 0;
				cnt++;
				v.erase(find(v.begin(), v.end(), pos));
			}

			v.push_back(arr[i]);
			visited[arr[i]] = 1;
		}
	}

	cout << cnt;

	return 0;
}
