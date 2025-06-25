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
#define MAX_SIZE 100

stack<int> st;

int arr[4] = { 1,5,10,25 };
int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int v;
		cin >> v;
		
		for (int i = 0; i < 4; i++)
			st.push(arr[i]);

		vector<int> ans;
		while (!st.empty())
		{
			if (v >= st.top()) {
				int temp = v / st.top();
				ans.push_back(temp);
				v %= st.top();
				st.pop();
			}
			else {
				ans.push_back(0);
				st.pop();
			}
		}

		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}
