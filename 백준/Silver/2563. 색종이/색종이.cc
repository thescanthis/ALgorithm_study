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
#define MAX_SIZE 100

int arr[100][100] = {};
int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	cin >> n;
	int max_x=0, max_y=0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (arr[j][k] == 0) {
					arr[j][k] = 1;
					ans++;
				}
			}
		}
	}
	
	cout << ans;
	return 0;
}
