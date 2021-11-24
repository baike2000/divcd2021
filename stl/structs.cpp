#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

struct Book
{
	string name;
	string author;
	int pages;
};

bool comp(Book a, Book b)
{
	if (a.name == b.name)
		if (a.author == b.author)
			return (a.pages < b.pages);
		else
			return a.author < b.author;
	else 
		return a.name < b.name;
}

int main()
{
	vector<Book> books;
	books.push_back({ "Alllphabet","Kirill",100 });
	books.push_back({ "Blphabet","AKirill",101 });
	books.push_back({ "Clphabet","GKirill",98 });
	books.push_back({ "Allphabet","KKirill",1001 });
	books.push_back({ "Dlphabet","EKirill",50 });
	sort(books.begin(), books.end(), comp);
	for (int i = 0; i < books.size(); i++)
		cout << books[i].name << " " << books[i].author << " " << books[i].pages << endl;
	return 0;
}