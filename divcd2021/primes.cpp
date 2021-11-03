#include <iostream>
#include <vector>

using namespace std;

vector<int> primes;
bool a[100000] = { 0 };


int mains()
{
	int n, i;
	cin >> n;
	for (int k = 2; k * k <= n; k++)
	{
		if (!a[k])
		{
			for (int i = k * k; i <= n; i += k)
			{
				a[i] = true;
			}
		}
	}
	for (int i = 2; i <= n; i++)
		if (!a[i])
			cout << i << endl;
	return 0;
}