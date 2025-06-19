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

	vector<string> v;
	string temp = "***************";

	for (int i = 0; i < 5; i++)
		v.push_back(temp);
	
	for (int i = 0; i < 5; i++)
	{
		std::string str;
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			v[i][j] = str[j];
		}
	}

	std::string ans = "";
	for (int i = 0; i < 15; i++)
	{
		int cnt = 0;

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j][i] == '*') {
				cnt++;
				continue;
			}
			ans += v[j][i];
		}

		if (cnt == 5) break;
		
	}
	cout << ans;
	
	return 0;
}
