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
int arr[100][100] = {};
bool vist[100][100] = {};

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int BFS(int y, int x,bool& Check)
{

    queue<pair<int, int >>q;
    q.push({ y, x });
    vist[y][x] = true;
    vector<pair<int, int>> v;
    int Count = 0;

    while (!q.empty())
    {
        int f = q.front().first;
        int t = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int _dy = f + dy[i];
            int _dx = t + dx[i];

            if (_dy < 0 || _dy >= n || _dx < 0 || _dx >= m) continue;
            else {
                
                if (arr[_dy][_dx] == 0 && !vist[_dy][_dx])
                {                 
                    q.push({ _dy,_dx });
                    vist[_dy][_dx] = true;
                }
                else if(!vist[_dy][_dx] && arr[_dy][_dx]==1) {
                    v.push_back({ _dy,_dx });
                }
            }
        }
    }

    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        int _y = v[i].first;
        int _x = v[i].second;
        int temp = arr[_y][_x];
        if (temp == 1) Count++;
        arr[_y][_x] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                Check = false;
                break;
            }
            else {
                Check = true;
            }
        }

        if (!Check) break;
    }

    int ans = Count;
    memset(vist, false, sizeof(vist));

    return ans;
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        bool check = false;
        for (int j = 0; j < m; j++)
        {
            if (!vist[i][j] && arr[i][j]==0)
            {
                Count = BFS(i, j, check);
                cnt++;
            }

            if (check) break;
        }
        if (check) break;
    }

    cout << cnt<<'\n'<<Count;
    return 0;
}