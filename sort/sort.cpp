#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 
// 0 1 2 3 4
// 1 3 3 2 5
// 0 1  
// 1 2 3 3 5
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main4() 
{ 
	int n; 
	cin >> n; 
	vector <int> a(n); 
	vector <pair<int, int>> b(n);
	for (int i = 0; i < n; i++) 
	{ 
		cin >> a[i]; 
		b[i] = { i, a[i] };
	} 
	//sort(a.begin(), a.end()); 
	stable_sort(b.begin(), b.end(), cmp);
		//[](pair<int, int> a, pair<int, int> b)
		//{
			//return a.second < b.second; 
		//}
	//);
	for (auto now : b) 
	{ 
		cout << now.first << " " << now.second << " ";
	} 
	return 0; 
}