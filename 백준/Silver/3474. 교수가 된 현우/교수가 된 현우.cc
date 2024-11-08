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

    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        int temp = 0;
        while (true)
        {
            if (v < 5) break;
            v = v / 5;
            temp += v;
        }

        cout << temp << '\n';
    }
    return 0;
}