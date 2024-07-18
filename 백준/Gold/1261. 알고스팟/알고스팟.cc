#include <bits/stdc++.h>
using namespace std;

int n,m;
int my[4]= {0,1,0,-1};
int mx[4]= {1,0,-1,0};

std::vector<vector<int>> Map;
std::vector<vector<int>> Dijistra;

void Input()
{
    Map = vector<vector<int>>(m,vector<int>(n,0));
    Dijistra = vector<vector<int>>(m,vector<int>(n,0));
    for(int i=0; i<m; i++)
    {
        std::string str;
        std::cin>>str;
        for(int j=0; j<str.size(); j++)
        {
            Map[i][j]=str[j]-'0';
            Dijistra[i][j]=1001;
        }
    }
}

void BFS(int y,int x)
{
    queue<pair<int,int>> q;
    q.push({y,x});
    Dijistra[y][x]=0;
    while(!q.empty())
    {
        int y_f = q.front().first;
        int x_f = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++)
        {
            int _my = my[i]+y_f;
            int _mx = mx[i]+x_f;
            
            if(_my<0 || _mx<0 || _my >= m || _mx>=n) continue;
            
            if(Map[_my][_mx]==0)
            {
                if(Dijistra[_my][_mx]>Dijistra[y_f][x_f])
                {
                    Dijistra[_my][_mx] = Dijistra[y_f][x_f];
                    q.push({_my,_mx});
                }
            }
            else if(Map[_my][_mx]==1)
            {
                if(Dijistra[_my][_mx]>Dijistra[y_f][x_f]+1)
                {
                    Dijistra[_my][_mx] = Dijistra[y_f][x_f]+1;
                    q.push({_my,_mx});
                }
            }
            
        }
    }
}

int main() {
    std::cin>>n>>m;
    Input();
    BFS(0,0);
    cout<<Dijistra[m-1][n-1];
    return 0;
}