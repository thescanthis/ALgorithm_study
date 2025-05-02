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
typedef long long ll;
#define _SIZE 1501

int n, m;
char arr[_SIZE][_SIZE] = {};
bool visited[_SIZE][_SIZE] = {};
bool water[_SIZE][_SIZE] = {};
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int f, t;
queue<pair<int, int>> waterQ;

int FindSwan(queue<pair<int,int>>& q)
{
	visited[q.front().first][q.front().second] = true;
	queue<pair<int, int>> tempQ;

	while (q.size())
	{
		tie(f, t) = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int _dy = dy[i] + f;
			int _dx = dx[i] + t;

			if (_dy < 0 || _dx < 0 || _dy >= n || _dx >= m || visited[_dy][_dx]) continue;
		
			visited[_dy][_dx] = true;

			if (arr[_dy][_dx] == 'L')
				return true;
			else if (arr[_dy][_dx] == '.')
			{
				q.push({ _dy,_dx });
			}
			else if (arr[_dy][_dx] == 'X')
			{
				tempQ.push({ _dy,_dx });
			}
			
		}
	}
	q = tempQ;
	return false;
}

void FindWater()
{
	queue<pair<int, int>> tempQ;

	while (waterQ.size())
	{
		tie(f, t) = waterQ.front();
		waterQ.pop();

		for (int i = 0; i < 4; i++)
		{
			int _dy = dy[i] + f;
			int _dx = dx[i] + t;

			if (_dy < 0 || _dx < 0 || _dy >= n || _dx >= m || water[_dy][_dx]) continue;

			water[_dy][_dx] = true;
			if (arr[_dy][_dx] == 'X')
			{
				tempQ.push({ _dy,_dx });
				arr[_dy][_dx] = '.';
			}
		}
	}

	waterQ = tempQ;

}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);


	cin >> n >> m;


	int y, x;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'L')
			{
				y = i;
				x = j;
				waterQ.push({ i,j });
			}

			if (arr[i][j] == '.')
				waterQ.push({ i,j });
		}

	}

	queue<pair<int, int>> q;
	q.push({ y,x });
	int cnt = 0;
	while (waterQ.size())
	{
		if (FindSwan(q)) break;
		FindWater();
		cnt++;
	}

	cout << cnt;
	return 0;
}