#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> edge(1001);
bool vist[1001] = {};

void DFS(int idx)
{
	if (vist[idx]) return;
	vist[idx] = true;

	cout << idx<<" ";

	for (auto x : edge[idx]) DFS(x);
}

void _BFS(int idx)
{
	queue<int> q;
	q.push(idx);

	vist[idx] = true;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();

		cout << front << " ";
		for (int key : edge[front])
		{
			if (!vist[key])
			{
				vist[key] = true;
				q.push(key);
			}
		}
	}
}

int main()
{
	int n, m, v;
	std::cin >> n >> m >> v;

	while (m--)
	{
		int x, y;
		std::cin >> x >> y;

		edge[x].push_back(y);
		edge[y].push_back(x);
	}

	for (int i = 0; i < edge.size(); i++)
		sort(edge[i].begin(), edge[i].end());

	memset(vist, false, sizeof(vist));
	DFS(v);

	memset(vist, false, sizeof(vist));
	cout << '\n';
	_BFS(v);

	return 0;
}