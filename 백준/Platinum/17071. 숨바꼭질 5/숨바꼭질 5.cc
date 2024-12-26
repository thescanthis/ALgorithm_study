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
#define MAX_SIZE 500000

int n, m;
int visited[2][MAX_SIZE+4] = {};

int BFS(int here)
{
    queue<int> q;
    q.push(here);
    visited[0][here] = 1;
    int trun = 1;
    bool ok = false;
    while (q.size())
    {
        m += trun;
        if (m > MAX_SIZE) break;
        if (visited[trun % 2][m])
        {
            return trun;
        }

        int Qsize = q.size();
        for (int i = 0; i < Qsize; i++)
        {
            int dx = q.front();
            q.pop();
            for (int x : {dx + 1, dx - 1, dx * 2})
            {
                if (x<0 || x>MAX_SIZE || visited[trun % 2][x]) continue;
                visited[trun % 2][x] = visited[(trun+1) % 2][dx] + 1;

                if (x == m) return trun;
                q.push(x);
            }
        }
        trun++;
    }
    return -1;
}

int main()
{
    cin >> n >> m;

    if (n == m)
    {
        cout << 0;
    }
    else {
        cout << BFS(n);
    }

    
    return 0;
}