#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void Merge(vector<int>& tm, int l1, int m2, int r) 
{ 
	int k1 = l1, k2 = m2 + 1; 
	vector<int> temp; 
	while (k1 <= m2 && k2 <= r) 
	{ 
		if (tm[k1] > tm[k2]) 
			temp.push_back(tm[k2++]); 
		else 
			temp.push_back(tm[k1++]); 
	} 
	while (k1 <= m2) 
		temp.push_back(tm[k1++]); 
	while (k2 <= r) 
		temp.push_back(tm[k2++]); 
	for (int i = l1; i <= r; ++i) 
		tm[i] = temp[i - l1]; 
} 

void MergeSort(vector<int>& t, int l, int r) 
{ 
	if (l >= r) return; 
	int m = (l + r) / 2; 
	MergeSort(t, l, m); 
	MergeSort(t, m + 1, r); 
	Merge(t, l, m, r); 
}

int main7()
{
	vector<int> a = { 1,3,5, 2, 7, 8, 3,4,9,0,4 };
	//MergeSort(a, 0, a.size() - 1);
	//for (auto x : a)
		//cout << x << " ";
	/*int b[101] = {0};;
	for (int i = 0; i < a.size(); i++)
	{
		b[a[i]]++;
	}
	for (int i = 0; i < 101; i++)
	{
		for(int j = 0; j < b[i]; j++)
			cout << i << " ";
	}*/

	return 0;
}