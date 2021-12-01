#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 
/*
10
3 4 2 6 7 4 3 5 2 1
*/
// l = 0, r = 3, c = 4, s = 15
// l = 1, r = 3, c = 3, s = 12
// l = 2, r = 4, c = 3, s = 15
// l = 3, r = 4, c = 2, s = 13
// l = 4, r = 5, c = 2, s = 11
// l = 5, r = 7, c = 3, s = 12

int main() 
{ 
	int n, k; 
	cin >> n >> k; 
	vector <int> a(n); 
	for (int i = 0; i < n; ++i) 
		cin >> a[i]; 
	long long sum = 0; 
	int R = 0; 
	int minLen = n + 1; 
	for (int L = 0; L < n; ++L) 
	{ 
		// перебираем левую границу 
		while (R < n && sum < k) 
		{ 
			// двигаем правую 
			sum += a[R]; R++; 
		} 
		if (sum >= k && R - L < minLen) 
			// если сумма подходит и длина минимальная 
			minLen = R - L; sum -= a[L]; 
	} 
	cout << minLen; 
	return 0; 
}