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

std::string a, b;

void StrLen(std::string& a, std::string& b)
{
	if (a.size() < b.size()) 
		swap(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	cin >> a >> b;
	StrLen(a, b);
	int sum = 0;
	stack<int> st;
	for (int i = 0; i < b.size(); i++)
	{
		int _aVal = a[a.size()-1-i] - '0';
		int _bVal = b[b.size()-1-i] - '0';

		sum = sum + _aVal + _bVal;

		if (sum < 10){
			st.push(sum);
			sum = 0;
		}
		else {
			int v = sum % 10;
			st.push(v);
			sum /= 10;
		}
	}

	if (a.size() == b.size()) {
		if (sum) st.push(sum);
		sum = 0;
	}
	else {
		for (int i = b.size(); i < a.size(); i++)
		{
			int _aVal = (a[a.size()-i-1]) - '0';
			sum += _aVal;

			st.push(sum % 10);
			sum /= 10;
		}
		if (sum)
			st.push(sum);
	}

	std::string ans="";
	while (st.size())
	{
		ans += st.top() + '0';
		st.pop();
	}

	cout << ans;
	return 0;
}
