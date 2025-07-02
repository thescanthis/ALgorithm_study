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

	while (true)
	{
		int x, y, z;
		cin >> x >> y >> z;

		if (x+y+z == 0) break;

		vector<int> v;
		v.push_back(x);
		v.push_back(y);
		v.push_back(z);

		sort(v.begin(), v.end());
		map<int, int> Tr;
		Tr[x]++;
		Tr[y]++;
		Tr[z]++;

		int _max = 0;
		for (auto x : Tr)
		{
			if (x.first == 0) {
				_max = 4;
				break;
			}
			_max = std::max(x.second, _max);
		}
		int temp = (v[0] + v[1]) - v[2];
		if (_max == 3) cout << "Equilateral";
		else if (_max == 2 && temp > 0) cout << "Isosceles";
		else if (_max == 1 && temp > 0) cout << "Scalene";
		else cout << "Invalid";
		cout << '\n';
	}



	



	return 0;
}