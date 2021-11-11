#include <iostream>
#include <stack>

using namespace std;
// ({})
// ({)}

int main3()
{
	string left = "({[";
	string right = ")}]";
	stack<char> st;
	string e;
	cin >> e;
	for (int i = 0; i < e.size(); i++)
	{
		if (left.find(e[i]) != string::npos)
		{
			st.push(e[i]);
		}
		else
		{
			int r = right.find(e[i]);
			if (st.empty())
			{
				cout << "ERROR" << endl;
				return 0;
			}
			int l = left.find(st.top());
			if (l != r)
			{
				cout << "ERROR" << endl;
				return 0;
			}
			st.pop();
		}
	}
	if (!st.empty())
	{
		cout << "ERROR" << endl;
	}
	else
		cout << "OK" << endl;
	return 0;
}