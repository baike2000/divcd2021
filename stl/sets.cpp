#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>

using namespace std;

int main3()
{
	set<int> numbers;

	numbers.insert(2);
	numbers.insert(3);
	numbers.insert(2);
	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << (*it) << " ";
	}
	return 0;
}