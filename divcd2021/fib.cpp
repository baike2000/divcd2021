#include<iostream>
#include<vector>

using namespace std;

long long fib(long long n)
{
	if (n == 0 || n == 1 )
		return 1;
	return fib(n - 1) + fib(n - 2);
}

vector<vector<int>> e()
{
	vector<vector<int>> v;
	v.push_back({ 1,0 });
	v.push_back({ 0,1 });
	return v;
}

vector<vector<int>> mul1(vector<vector<int>> a, vector<vector<int>> b)
{
	vector<vector<int>> v;
	v.push_back({ a[0][0] * b[0][0] + a[0][1] * b[1][0], 0 });
	v.push_back({ a[1][0] * b[0][0] + a[1][1] * b[1][0], 0 });
	return v;
}

vector<vector<int>> mul(vector<vector<int>> a, vector<vector<int>> b)
{
	vector<vector<int>> v;
	v.push_back({ a[0][0] * b[0][0] + a[0][1] * b[1][0], a[0][0] * b[0][1] + a[0][1] * b[1][1] });
	v.push_back({ a[1][0] * b[0][0] + a[1][1] * b[1][0], a[1][0] * b[0][1] + a[1][1] * b[1][1] });
	return v;
}


vector<vector<int>> pow(vector<vector<int>> a, long long n)
{
	if (n == 0) return e();
	if (n == 1) return a;
	vector<vector<int>> t = pow(a, n / 2);
	return mul(mul(t, t), pow(a, n % 2));
}

vector<vector<int>> fibn(long long n)
{
	vector<vector<int>> v;
	v.push_back({ 1,0 });
	v.push_back({ 1,0 });
	vector<vector<int>> f;
	f.push_back({ 1,1 });
	f.push_back({ 1,0 });
	return mul1(pow(f, n), v);
}

int main()
{
	int n;
	cin >> n;
	cout << fibn(n)[1][0] << endl;
	return 0;
}