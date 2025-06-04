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
#include <algorithm>
#include <string.h>
using namespace std;

int n, l;
int ret = 0;
int a[101][101];
int b[101][101];

void solve(int a[101][101])
{
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		int j;
		for (j = 0; j < n - 1; j++)
		{
			if (a[i][j] == a[i][j + 1]) cnt++;
			else if (a[i][j] + 1 == a[i][j + 1] && cnt >= l) cnt = 1;
			else if (a[i][j] - 1 == a[i][j + 1] && cnt >= 0) cnt = -l + 1;
			else break;
		}

		if (j == n - 1 && cnt >= 0) ret++;
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> n >> l;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}

	solve(a); solve(b);
	cout << ret;
}