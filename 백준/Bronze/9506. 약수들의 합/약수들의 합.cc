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

vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	while (true)
	{
		int n;
		cin >> n;
		queue<int> q;
		if (n == -1) break;

		int CompareN = 0;

		for (int x = 1; x <= n / 2; x++)
		{
			if (n % x == 0)
			{
				q.push(x);
				CompareN += x;
			}
		}

		if (CompareN == n)
		{
			cout << n << " = ";
			while (!q.empty())
			{
				cout << q.front();
				q.pop();

				if (!q.empty()) cout << " + ";
			}
			cout << '\n';
		}
		else {
			cout << n <<" is NOT perfect."<<'\n';
		}
	}

	return 0;
}

