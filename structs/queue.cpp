#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main4() {
	int k;
	cin >> k;
	deque<string> dq(52);
	for (int i = 0; i < 52; i++)
		cin >> dq[i];

	queue<string> q;
	for (int i = 51; i >= 0; i--) {
		q.push(dq[i]);
	}
	while (q.size() > 1) {
		for (int i = 0; i < k % q.size(); i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}

	cout << q.front();

	return 0;
}