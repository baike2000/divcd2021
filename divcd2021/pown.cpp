#include<iostream>

using namespace std;

long long pow(long long a, long long n)
{
	if (n == 0) return 1;
	if (n == 1) return a;
	long long t = pow(a, n / 2);
	return t * t * pow(a, n % 2);
}

int main2()
{
	long long int a, n;
	cin >> a >> n;
	long long int pw = 1;
	for (int i = 0; i < n; i++)
	{
		pw *= a;
	}
	cout << pw << endl;
	cout << pow(a, n) << endl;
	return 0;
}