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

int n;
stack<char> st;
int _max = 0;
int arr[200001] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin >> n;
	
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		char s;
		cin >> s;
		if (s == '(') st.push(i);
		else {
			if (!st.empty()) {
				arr[st.top()] = 1;
				arr[i] = 1;
				st.pop();
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1) cnt++;
		else {
			cnt = 0;
		}

		_max = max(_max, cnt);
	}
	cout << _max;
	return 0;
}