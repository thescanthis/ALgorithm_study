#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> ans;
vector<vector<int>> Map;


void Input()
{
    ans = vector<vector<int>>(m, vector<int>(n, 0));
    Map = vector<vector<int>>(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        string str;
        std::cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            Map[i][j] = str[j] - '0';
            ans[i][j] = INT_MAX;
        }
    }
}

void BFS(int y, int x)
{
    queue<pair<int, int>> q;
    q.push({ y,x });
    ans[y][x] = 0;

    int my[4] = {0,1,0,-1};
    int mx[4] = {1,0,-1,0};

    while (!q.empty())
    {
        int y_front = q.front().first;
        int x_front = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int _my = my[i] + y_front;
            int _mx = mx[i] + x_front;

            if ((_my < 0 || _mx < 0) || (_my >= m || _mx >= n)) continue;

            if (Map[_my][_mx] == 1)
            {
                if (ans[_my][_mx] > ans[y_front][x_front] + 1)
                {
                    ans[_my][_mx] = ans[y_front][x_front] + 1;
                    q.push({ _my,_mx });
                }
            }
            else if (Map[_my][_mx] == 0)
            {
                if (ans[_my][_mx] > ans[y_front][x_front])
                {
                    ans[_my][_mx] = ans[y_front][x_front];
                    q.push({ _my,_mx });
                }
            }
        }
    }
}


int main()
{
    std::cin >> n >> m;
    Input();
    BFS(0, 0);
    cout << ans[m - 1][n - 1];
    return 0;
}