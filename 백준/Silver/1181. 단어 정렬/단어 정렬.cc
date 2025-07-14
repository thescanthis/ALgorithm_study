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

int n;
vector<string> v;

bool compare(string& str, string& str1)
{
	if (str.size() != str1.size())
		return str.size() < str1.size();

	return str < str1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	cin >> n;
	set<string> s;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		s.emplace(str);
	}

	for (auto x : s)
		v.push_back(x);
	
	sort(v.begin(), v.end(),compare);

	for (auto x : v)
	{
		cout << x << '\n';
	}

	return 0;
}