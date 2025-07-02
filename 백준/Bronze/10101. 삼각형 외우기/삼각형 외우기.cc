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

	int x, y, z;
	cin >> x >> y >> z;

	int sum = x+y+z;

	map<int, int> Tr;
	Tr[x]++;
	Tr[y]++;
	Tr[z]++;

	int _max = 0;
	for (auto x : Tr)
	{
		_max = std::max(x.second, _max);
	}

	if (_max == 3 && sum==180) cout << "Equilateral";
	else if (_max == 2 && sum == 180) cout << "Isosceles";
	else if (_max == 1 && sum == 180) cout << "Scalene";
	else cout << "Error";
	return 0;
}

