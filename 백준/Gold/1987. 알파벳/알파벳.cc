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

int n, m;
char Maps[30][30] = {};
int dy[4] = {-1,0,1,0};
int dx[4] = { 0,1,0,-1 };
int cnt = 0;
int visited[30] = {};

void DFS(int y, int x, int depth)
{
	cnt = std::max(cnt, depth);
	for (int i = 0; i < 4; i++)
	{
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		int next = (int)(Maps[ny][nx] - 'A');

		if (visited[next] == 0)
		{
			visited[next] = 1;
			DFS(ny, nx, depth+1);
			visited[next] = 0;
		}
	}
	return;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> Maps[i][j];
		}
	}

	visited[(int)Maps[0][0] - 'A'] = 1;
	DFS(0, 0, 1);

	cout << cnt;
	return 0;
}