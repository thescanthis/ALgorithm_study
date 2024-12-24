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

#define MAX_SIZE 200004

int n, m;
int arr[MAX_SIZE] = {};
bool visted[MAX_SIZE] = {};
int cnt = 0;
vector<int> Root;

void BFS(int here)
{
    queue<int> q;
    q.push(here);
    visted[here] = true;
    arr[here] = 1;
    Root.push_back(m);

    while (q.size())
    {
        int f = q.front();
        q.pop();

        if (f == m) break;
        for (int x : {-1, 1, 2})
        {
            int dir = (x==2) ? f*x : f+x;

            if (!visted[dir] && dir < MAX_SIZE && dir>=0)
            {
                q.push(dir);
                arr[dir] = arr[f] + 1;
                visted[dir] = true;

            }
        }
    }

    int _m = m;
    while (_m != n)
    {
        if (Root.size() == arr[m]) break;
        for (int x : {-1, 1, 2})
        {
            int dir = (x == 2) ? _m / 2 : _m - x;
            if (arr[dir] == arr[_m] - 1)
            {
                _m = dir;
                Root.push_back(_m);
                break;
            }
        }
    }

    cout << arr[m] - 1<<'\n';
    for (int i = Root.size() - 1; i >= 0; i--)
    {
        cout << Root[i] << " ";
    }
}

int main()
{
    cin >> n >> m;

    BFS(n);
    return 0;
}

