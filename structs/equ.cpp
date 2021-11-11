#include <iostream>
#include <stack>

using namespace std;
//5 15 + 4 7 + 1 - /

int operation(int a, int b, char op)
{
	switch (op)
	{
	case '+':return a + b;
	case '-':return a - b;
	case '*':return a * b;
	case '/':return a / b;
	}
	return 0;
}

int main2()
{
	stack<int> st;
	string e;
	while (cin >> e)
	{
		if (e == "+" || e == "-" || e == "/" || e == "*")
		{
			int b = st.top(); st.pop();
			int a = st.top(); st.pop();
			st.push(operation(a, b, e[0]));
		}
		else
		{
			int a = atoi(e.c_str());
			st.push(a);
		}
	}
	cout << st.top() << endl;

	return 0;
}