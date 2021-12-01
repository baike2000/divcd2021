#include<iostream>
#include<algorithm>

using namespace std;

int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
bool comp(int l) 
{ 
	return l % 3 != 0; 
} 

int main3() 
{ 
	int i = partition(a, a + 9, comp) - a; 
	for (int j = 0; j < i; ++j) 
		cout << a[j] << " ";
	cout << endl; 
	for (int j = i; j < 9; ++j) 
		cout << a[j] << " "; 
	return 0;
}