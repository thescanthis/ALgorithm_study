#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int n, m, k;
int arr[101][101] = {};
bool vist[101][101] = {};
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

vector<int> ans;
void BFS(int start, int end)
{
	vist[start][end] = true;
	queue<pair<int, int>> q;
	q.push({ start,end });

	int cnt = 1;
	while (!q.empty())
	{
		int f = q.front().first;
		int t = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = f + dy[i];
			int nx = t + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;

			if (!vist[ny][nx] && arr[ny][nx] == 0)
			{
				vist[ny][nx] = true;
				q.push({ ny,nx });
				cnt++;
			}
		}
	}
	ans.push_back(cnt);

	
}

int main(void)
{
	cin >> n >> m >> k;

	for (int i = 0; i < k; i++)
	{
		int x, y, x1, y1;
		cin >> x >> y >> x1 >> y1;

		int _n = n - y - 1;
		int _en = n - y1 - 1;

		for (int j = _n; j > _en; j--)
		{
			for (int k = x; k < x1; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			
			if (arr[i][j] == 0 && !vist[i][j])
			{
				BFS(i, j);
				cnt++;
			}
			
		}
	}

	cout << cnt << '\n';
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

	return 0;
}