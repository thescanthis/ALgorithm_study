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

    while (true)
    {
        string str;
        getline(cin, str);

        if (str == ".") break;

        stack<char> st;
        bool check = true;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i]=='[') st.push(str[i]);

            if (str[i] == ')' || str[i]==']')
            {
                if (st.empty())
                {
                    check = false;
                    break;
                }

                char temp = st.top();
                if (temp == '(' && str[i] == ')') st.pop();
                else if (temp == '[' && str[i] == ']') st.pop();
                else {
                    check = false;
                    break;
                }
            }
           
        }

        if (st.empty() && check) cout<< "yes" << '\n';
        else cout << "no" << '\n';


    }
    return 0;
}