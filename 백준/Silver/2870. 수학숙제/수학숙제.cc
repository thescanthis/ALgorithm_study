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

bool compare(const std::string& a, const string& b)
{
	if (a.size() != b.size())
	{
		return a.size() < b.size();
	}

	return a < b;
}

int main(void)
{
	int n;
	cin >> n;

	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		string temp;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] >= '0' && str[j] <= '9')
			{
				temp += str[j];

				if (temp.size() > 1 && temp[0] == '0')
					temp.erase(temp.begin(), temp.begin() + 1);
			}
			else {
				if (temp == "") continue;
				v.push_back(temp);
				temp = "";
			}
		}

		if (temp !="") v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);
	for (auto x : v) cout << x << '\n';
	return 0;
}