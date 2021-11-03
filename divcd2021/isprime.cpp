#include<iostream>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main1()
{
	int n;
	bool prime = true;
	cin >> n;
	if (!isPrime(n))
		cout << "not prime" << endl;
	else
		cout << "prime" << endl;
	return 0;
}