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
char arr[SZ][SZ] = {};
int visited[SZ][SZ], visited_Swan[SZ][SZ];
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int y,x,SwanY, SwanX, day;
queue<pair<int, int>> waterQ, water_tempQ, swanQ, swan_tempQ;

void Qclear(queue<pair<int, int>>& q)
{
    queue<pair<int, int>> empty;
    swap(q, empty);
}

void water_melting()
{
    while (waterQ.size())
    {
        tie(y, x) = waterQ.front();
        waterQ.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx]) continue;
            
            if (arr[ny][nx] == 'X')
            {
                visited[ny][nx] = true;
                water_tempQ.push({ ny,nx });
                arr[ny][nx] = '.';
            }
        }
    }
}

bool move_swan()
{
    while (swanQ.size())
    {
        tie(y, x) = swanQ.front();
        swanQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited_Swan[ny][nx]) continue;
            visited_Swan[ny][nx] = true;
            if (arr[ny][nx] == '.') swanQ.push({ ny,nx });
            else if (arr[ny][nx] == 'X') swan_tempQ.push({ ny,nx });
            else if (arr[ny][nx] == 'L') return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'L') { SwanY = i, SwanX = j; }
            if (arr[i][j] == '.' || arr[i][j] == 'L') visited[i][j] = 1, waterQ.push({ i,j });
        }
    }

    swanQ.push({ SwanY,SwanX });
    visited_Swan[SwanY][SwanX] = 1;

    while (true)
    {
        if (move_swan()) break;
        water_melting();
        waterQ = water_tempQ;
        swanQ = swan_tempQ;
        Qclear(water_tempQ);
        Qclear(swan_tempQ);
        day++;
    }

    cout << day;
    return 0;
}