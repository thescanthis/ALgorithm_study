#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	std::cin>>n;
	
	string str,prev,sufix;
	cin>>str;
	
	int idx = str.find('*');
	
	prev = str.substr(0,idx);
	sufix = str.substr(idx+1);
	
	for(int i=0; i<n; i++)
	{
		string temp;
		cin>>temp;
		if(temp.size() < prev.size()+sufix.size())
		{
			cout<<"NE"<<'\n';
		}
		else{
		if(temp.substr(0,idx)==prev && temp.substr(temp.size()-sufix.size()) == sufix) cout<<"DA"<<'\n';
		else cout<<"NE"<<'\n';	
		}
	}
	return 0;
}
  
  