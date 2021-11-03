#include<iostream>
#include<vector>

using namespace std;

long long fib(long long n)
{
	if (n == 0 || n == 1 )
		return 1;
	return fib(n - 1) + fib(n - 2);
}

void printmat(vector<vector<long long>> b)
{
	for (long long i = 0; i < b.size(); i++)
	{
		for (long long j = 0; j < b[i].size(); j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

vector<vector<long long>> e()
{
	vector<vector<long long>> v;
	v.push_back({ 1,0 });
	v.push_back({ 0,1 });
	return v;
}

vector<vector<long long>> mul1(vector<vector<long long>> a, vector<vector<long long>> b)
{
	vector<vector<long long>> v;
	v.push_back({ a[0][0] * b[0][0] + a[0][1] * b[1][0], 0 });
	v.push_back({ a[1][0] * b[0][0] + a[1][1] * b[1][0], 0 });
	return v;
}

vector<vector<long long>> mul(vector<vector<long long>> a, vector<vector<long long>> b)
{
	vector<vector<long long>> v;
	v.push_back({ a[0][0] * b[0][0] + a[0][1] * b[1][0], a[0][0] * b[0][1] + a[0][1] * b[1][1] });
	v.push_back({ a[1][0] * b[0][0] + a[1][1] * b[1][0], a[1][0] * b[0][1] + a[1][1] * b[1][1] });
	return v;
}


vector<vector<long long>> pow(vector<vector<long long>> a, long long n)
{
	if (n == 0) return e();
	if (n == 1) return a;
	vector<vector<long long>> t = pow(a, n / 2);
	return mul(mul(t, t), pow(a, n % 2));
}



vector<vector<long long>> fibn(long long n)
{
	vector<vector<long long>> v;
	v.push_back({ 1,0 });
	v.push_back({ 1,0 });
	vector<vector<long long>> f;
	f.push_back({ 1,1 });
	f.push_back({ 1,0 });
	return mul1(pow(f, n), v);
}

int main()
{
	long long n;
	cin >> n;
	for (long long i = 1; i < n; i++)
		cout << fibn(i)[1][0] << endl;// << " " << fib(i) << endl;
	return 0;
}