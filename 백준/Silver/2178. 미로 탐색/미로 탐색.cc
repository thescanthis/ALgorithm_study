#include <iostream>
#include <queue>
#include <vector>
#include <string>
#define MAX_SIZE 101
using namespace std;


int n, m;
int mr[4] = { 1,-1,0,0 };
int mc[4] = { 0,0,1,-1 };
vector<vector<int>>v;
int ans[MAX_SIZE][MAX_SIZE] = {};
bool Check[MAX_SIZE][MAX_SIZE] = {};

void BFS(int& y,int& x)
{
    queue<pair<int,int>>q;
    q.push(make_pair(y,x));
    Check[y][x] = true;
    while (!q.empty())
    {
        int front = q.front().first;
        int to = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int _row = front + mr[i];
            int _col = to + mc[i];

            if (0 <= _row && _row < n && 0 <= _col && _col < m)
            {
                if (v[_row][_col] == 1 && Check[_row][_col] == 0)
                {
                    ans[_row][_col] = ans[front][to] + 1;
                    Check[_row][_col] = true;
                    q.push(make_pair(_row, _col));
                }
            }
        }
    }
}

int main(void)
{
    std::cin>>n>>m;
    
    string str[101]={};
    v=vector<vector<int>>(n,vector<int>(0,-1));
    for(int y=0; y<n; y++)
    {
        std::cin>>str[y];
        
        for(int x=0; x<m; x++)
        {
            int tmp = str[y][x]-'0';
            v[y].push_back(tmp);
        }
    }
    int y=0;
    int x=0;
    BFS(y,x);
    
    std::cout<<ans[n-1][m-1]+1;
    
    return 0;
}