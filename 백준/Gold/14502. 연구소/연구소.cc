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
using namespace std;

int n, m;
int arr[10][10] = {};
bool vist[10][10] = {};
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
vector<pair<int, int>> BPoint;
vector<pair<int, int>> LPoint;

void DFS(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int _dy = dy[i] + y;
        int _dx = dx[i] + x;

        if (_dy < 0 || _dy >= n || _dx < 0 || _dx >= m ||
            vist[_dy][_dx] || arr[_dy][_dx] == 1) continue;

        vist[_dy][_dx] = 1;
        DFS(_dy, _dx);
    }
    return;
}

int Solve()
{
    int cnt = 0;
    fill(&vist[0][0], &vist[0][0] + 10 * 10, false);

    for (pair<int, int> t : BPoint)
    {
        vist[t.first][t.second] = true;
        DFS(t.first, t.second);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 && !vist[i][j]) cnt++;
        }
    }
    return cnt;
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2) BPoint.push_back({ i,j });
            if (arr[i][j] == 0) LPoint.push_back({ i,j });
        }
    }

    int ret = 0;
    for (int i = 0; i < LPoint.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                arr[LPoint[i].first][LPoint[i].second] = 1;
                arr[LPoint[j].first][LPoint[j].second] = 1;
                arr[LPoint[k].first][LPoint[k].second] = 1;

                if (ret < Solve())
                    ret = Solve();

                arr[LPoint[i].first][LPoint[i].second] = 0;
                arr[LPoint[j].first][LPoint[j].second] = 0;
                arr[LPoint[k].first][LPoint[k].second] = 0;
                
            }
        }
    }

    cout << ret;
    
    return 0;
}
