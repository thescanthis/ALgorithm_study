#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
using namespace std;

char arr[51][51] = {};
vector<pair<int, int>>L, W;
int n, m;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
bool visted[51][51] = {};

int BFS(int y, int x)
{
    int ans[51][51] = {};
    queue<pair<int, int >> q;
    q.push({ y,x });
    visted[y][x] = true;

    int cnt = 0;
    while (!q.empty())
    {
        int _f = q.front().first;
        int _t = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int _dy = dy[i] + _f;
            int _dx = dx[i] + _t;

            if (_dy < 0 || _dx < 0 || _dy >= n || _dx >= m || arr[_dy][_dx]=='W') continue;
            if (visted[_dy][_dx]) continue;

            if (arr[_dy][_dx] == 'L')
            {
                visted[_dy][_dx] = true;
                ans[_dy][_dx] = ans[_f][_t] + 1;
                cnt = max(ans[_dy][_dx], cnt);
                q.push({ _dy, _dx });
            }
        }
    }

    return cnt;
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'W') W.push_back({ i,j });
            if (arr[i][j] == 'L') L.push_back({ i,j });
        }
    }

    int Max = 0;
    for (int i = 0; i < L.size(); i++)
    {
        fill(&visted[0][0], &visted[0][0] + 51 * 51, false);

        if (!visted[L[i].first][L[i].second])
        {
            Max = max(BFS(L[i].first, L[i].second), Max);
        }
    }

    cout << Max;

    return 0;
}