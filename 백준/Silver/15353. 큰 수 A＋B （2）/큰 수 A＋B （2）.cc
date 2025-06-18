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

std::string a, b;

std::string string_add(string a, string b)
{
	int sum = 0;
	std::string ret;
	while (a.size() || b.size() || sum)
	{
		if (a.size()) {
			sum += a.back() - '0';
			a.pop_back();
		}
		if (b.size()) {
			sum += b.back() - '0';
			b.pop_back();
		}

		ret += (sum % 10) + '0';
		sum /= 10;
	}

	reverse(ret.begin(), ret.end());
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin >> a >> b;

	cout << string_add(a, b);
	return 0;
}
