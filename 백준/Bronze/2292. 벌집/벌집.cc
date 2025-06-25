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
#define MAX_SIZE 1'000'000'000

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;

	cin >> n;
	
	int num = 1;
	int layer = 1;
	while (n > num)
	{
		num += 6 * layer;
		++layer;
	}
	
	cout << layer;
	return 0;
}
