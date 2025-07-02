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


int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	cin >> n;
	if (n == 1) cout << 0;
	else {
		int _x = -10001,_x1=10001;
		int _y = -10001,_y1=10001;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			_x = max(_x, x);
			_y = max(_y, y);
			_x1 = min(_x1, x);
			_y1 = min(_y1, y);
		}

		int ans = (_x - _x1) * (_y - _y1);
		cout << ans;
	}
	return 0;
}

