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
map<int, int> maps,maps1;

string info[6] = {"add","remove","check","toggle","all","empty"};

void InitMaps()
{
	for (int i = 1; i <= 20; i++)
	{
		maps1[i] = i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> n;


	InitMaps();
	for (int i = 0; i < n; i++)
	{
		std::string str;
		cin >> str;
		if (str == info[0])
		{
			int temp;
			cin >> temp;
			if (maps[temp] == temp) continue;
			maps[temp] = temp;
		}
		else if (str == info[1])
		{
			int temp;
			cin >> temp;
			if (maps[temp] == temp)
			{
				maps.erase(temp);
			}
		}
		else if (str == info[2])
		{
			int temp;
			cin >> temp;
			if (maps[temp] == temp) cout << 1<<'\n';
			else cout << 0<<'\n';
		}
		else if (str == info[3])
		{
			int temp;
			cin >> temp;
			if (maps[temp] == temp)
				maps.erase(temp);
			else maps[temp] = temp;
		}
		else if (str == info[4])
		{
			maps = maps1;
		}
		else if (str == info[5])
		{
			maps.clear();
		}
	}

	return 0;
}