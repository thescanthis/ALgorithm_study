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
vector<pair<int,std::string>> v;

bool comapre(const pair<int, string>& p1,const pair<int, string>& p2)
{
	return p1.first < p2.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int e;
		string  name;
		cin >> e >> name;
		v.push_back({ e,name });
	}

	stable_sort(v.begin(), v.end(),comapre);

	for (auto x : v)
	{
		cout << x.first<<" "<< x.second << '\n';
	}


	return 0;
}