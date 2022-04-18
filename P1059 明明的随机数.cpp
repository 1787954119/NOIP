#include <iostream>
#include <set>

using namespace std;

int main()
{
	set <int> a;
	int n,b;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> b;
		a.insert(b);
	}
	int count = 0;
	for (set <int> ::iterator i = a.begin(); i != a.end(); ++i)
	{
		++count;
	}
	cout << count << endl;
	for (set <int> ::iterator i = a.begin(); i != a.end(); ++i)
	{
		cout << *i <<" ";
	}
	cout << endl;
	return 0;
}
