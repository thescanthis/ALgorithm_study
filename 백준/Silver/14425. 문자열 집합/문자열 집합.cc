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

int n,m;

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	cin >> n >> m;
	unordered_set<string> s;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		s.emplace(str);
	}

	int cnt = 0;

	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		if (s.find(str) != s.end()) cnt++;
	}

	cout << cnt;
}