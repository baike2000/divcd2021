#include<iostream>
#include<algorithm>

using namespace std;
// 1 2 3 4 5 6 7 8 9
// 9 8 7 6 5 4 3 2 1
// 1 3 4 6 3 1 2 7 8
// 1 2 4 5 3 1 3 7 8
// 1 2 1 5 3 4 3 7 8
// 1 2 1 3 5 4 3 7 8
// 1 2 1
// 1 1 2
// 3 5 4 3 7 8
// 3 3 4 5 7 8
// 1 1 2 3 3 4 5 7 8

void quick_sort(int a[], int l, int r) {
	int i = l, j = r, p = a[(l + r) / 2]; 
	while (i <= j) 
	{
		while (a[i] < p) i++; 
		while (a[j] > p) j--; 
		if (i <= j) 
		{
			swap(a[i], a[j]);
		}
	}
	if (l < j) quick_sort(a, l, j); // Левая часть 
	if (i < r) quick_sort(a, i, r); // Правая часть 
}

int main1()
{
	return 0;
}