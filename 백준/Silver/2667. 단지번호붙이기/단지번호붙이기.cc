#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n;
vector<vector<char>>v;
vector<int>Ans;
const int mr[4] = { 1,-1,0,0 };
const int mc[4] = { 0,0,1,-1 };
int ansCnt = 0;
int DanjiCount = 0;


void Input()
{
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<n; x++)
        {
            char tmp;
            std::cin>>tmp;
            v[y].push_back(tmp);
        }
    }
}

void DFS(int y,int x)
{
    v[y][x] = 0;
    ansCnt++;

    for (int i = 0; i < 4; i++)
    {
        int _row = y + mr[i];
        int _col = x + mc[i];

        if (_row >= 0 && _row < n && _col >= 0 && _col < n)
        {
            if (v[_row][_col] == '1')
            {
                DFS(_row, _col);
            }
        }
    }
}

int main() {
    
    cin>>n;
    v=vector<vector<char>>(n);
    Input();
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '1')
            {
                ansCnt = 0;
                DFS(i, j);
                DanjiCount++;
                Ans.push_back(ansCnt);
            }
        }
    }
    sort(Ans.begin(),Ans.end());
    cout << DanjiCount<<'\n';
    for (int i = 0; i < Ans.size(); i++)
    {
        cout <<Ans[i]<<'\n';
    }
    return 0;
}