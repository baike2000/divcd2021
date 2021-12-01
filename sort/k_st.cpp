#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// 5 1 9 2 0 5 7 3 4 5 8 5 5 5 10 6
int k_st(vector<int> a, int l, int r, int k) 
{ 
	if (l >= r) return a[l]; 
	int i = l, j = r, p = a[(l + r) / 2]; 
	while (i < j) 
	{ 
		while (a[i] < p) i++; 
		while (a[j] > p) j--; 
		if (i < j) 
		{ 
			swap(a[i], a[j]); 
			i++; 
			j--; 
		} 
	} 
 	if (k >= l && k < i) 
		return k_st(a, l, i - 1, k); 
	else 
		if (j < k && k <= r) 
			return k_st(a, j + 1, r, k); 
		else 
			return p; 
}

// 8 9 9 1 7 5 5
//   9 9 8 7 5 5
//         8 9 9
//         8 9
//         8
int main6()
{
	vector<int> a = { 8,9,9,1,7,5,5 };
	cout << k_st(a, 0, a.size() - 1, 4) << endl;
	return 0;
}