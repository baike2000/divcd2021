#include<iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	cout << a << " " << b << endl;
	if (b == 0)
		return a;
    else
		return gcd(b, a % b);
}

int main3()
{
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}