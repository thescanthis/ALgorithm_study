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
#define SZ 1504

int n, m;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

int visted[SZ][SZ],water[SZ][SZ];
char arr[SZ][SZ];
int _Start, _End;
int y, x;
queue<pair<int, int>> waterQ;

bool FindSwan(queue<pair<int, int>>& q)
{
    visted[q.front().first][q.front().second] = true;
    queue<pair<int, int>> Temp;
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if (ny < 0 || nx < 0 || ny >= n || nx >= m || visted[ny][nx]) continue;
            visted[ny][nx] = true;

            if (arr[ny][nx] == 'L')
                return true;
            else if (arr[ny][nx] == '.')
                q.push({ ny,nx });
            else if (arr[ny][nx] == 'X')
                Temp.push({ ny,nx });
        }
    }

    q = Temp;
    return false;
}

void FindWater()
{
    queue<pair<int, int>> Temp;
    while (waterQ.size())
    {
        tie(y, x) = waterQ.front();
        waterQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if (ny < 0 || nx < 0 || ny >= n || nx >= m || water[ny][nx]) continue;
            water[ny][nx] = true;
            if (arr[ny][nx] == 'X')
            {
                Temp.push({ ny,nx });
                arr[ny][nx] = '.';
            }
        }
    }

    waterQ = Temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'L') {
                _Start = i;
                _End = j;
            }

            if (arr[i][j] == 'L' || arr[i][j] == '.')
            {
                waterQ.push({ i,j });
            }
        }
    }

    int ans = 0;
    queue<pair<int, int>> q;
    q.push({ _Start,_End });
    while (waterQ.size())
    {
        if (FindSwan(q)) break;
        FindWater();
        ans++;
    }

    cout << ans;
    return 0;
}