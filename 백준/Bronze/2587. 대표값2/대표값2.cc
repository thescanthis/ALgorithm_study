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

void Input()
{
	for (int i = 0; i < 5; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	Input();
	for (int i = 1; i < 5; i++)
	{
		int key = v[i];
		int j = i - 1;

		while (j >= 0 && v[j] > key) {
			v[j + 1] = v[j];
			j--;
		}

		v[j + 1] = key;
	}

	int sum = 0;
	for (int i : v)
	{
		sum += i;
	}

	cout << sum/v.size() << '\n' << v[(v.size() - 1) / 2];

	return 0;
}