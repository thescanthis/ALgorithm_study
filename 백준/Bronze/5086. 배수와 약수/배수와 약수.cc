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

std::string Fac_Multi(int x,int y)
{
	if (y % x == 0) return "factor";
	else if (x % y == 0) return "multiple";
	else return "neither";
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);


	while (true)
	{
		int x, y;
		cin >> x >> y;

		if (x == 0 && y == 0) break;

		string str = Fac_Multi(x,y);
		cout << str<<'\n';
	}

	return 0;
}

