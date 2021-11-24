#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<map>

using namespace std;

int main2()
{
	map<string, int> words;
	string w;
	while (cin >> w)
	{
		words[w]++;
	}
	//cin >> w;
	//if (words.count(w) > 0)
	//{
		//cout << words[w] << endl;
	//}
	for (auto it = words.begin(); it != words.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}