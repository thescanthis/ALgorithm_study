#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int cnt = -1;
        bool check = false;
        for (int j = 0; j < str.size(); j++)
        {
            if (check)
            {
                cnt++;
            }

            if (str[j] == 'c')
            {
                check = true;
                cnt = 0;
            }

            if (!check)
            {
                cnt = -1;
            }

            cout << cnt<<" ";
        }
        cout << '\n';
    }
    return 0;
}