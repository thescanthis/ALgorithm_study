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

int A, B,aSum,bSum;

string Print(int ans)
{
    int m = ans / 60;
    int s = ans % 60;

    string _m = "00" + to_string(m);
    string _s = "00" + to_string(s);

    return _m.substr(_m.size() - 2, 2) + ":" + _s.substr(_s.size() - 2, 2);
}

int chageToInt(string a)
{
    int temp = stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
    return temp;
}

void go(int& Sum, string str,string prev)
{
    Sum += chageToInt(str) - chageToInt(prev);
}

int main(void)
{
    int n;
    cin >> n;
    string Prev = "";
    for (int i = 0; i < n; i++)
    {
        int t; string str;
        cin >> t>>str;

        if (A > B) go(aSum, str,Prev);
        else if (B > A)go(bSum, str, Prev);

        t == 1 ? A++ : B++;
        Prev = str;
    }

    if (A > B) go(aSum, "48:00", Prev);
    if (A < B) go(bSum, "48:00", Prev);

    cout << Print(aSum)<<'\n'<< Print(bSum) << '\n';
    return 0;
}