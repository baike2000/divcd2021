#include <iostream>
#include <stack>

using namespace std;

int main1()
{
	stack<int> st;
	int k;
	while (cin >> k)
	{
		st.push(k);
	}
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}