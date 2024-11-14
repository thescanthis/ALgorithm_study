#include <iostream>
#include <sstream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int n;
int arr[1000001] = {};

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    stack<int> st;
    vector<int>ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i]) st.pop();

        if (st.empty()) ans.push_back(-1);
        else {
            ans.push_back(st.top());
        }

        st.push(arr[i]);
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
}