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
int n;



int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	cin >> n;
	v.resize(10010);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		v[tmp]++;

	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < v[i]; j++)
		{
			cout << i<<'\n';
		}
	}
	
	
	return 0;
}