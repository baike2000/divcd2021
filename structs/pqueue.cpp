#include <iostream>
#include <stack>
#include <queue>

using namespace std;

priority_queue<int> q;

int main() {
	int k;
	while (cin >> k)
	{
		q.push(k);
	}
	while (!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
	}

	return 0;
}