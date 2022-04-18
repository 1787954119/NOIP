#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int a[10];

int main()
{
	int n,t;
	int count = 0;
	set <int> x;
	vector <int> y;
	cin >> n;
	for (int i = 1; i <= 7; ++i)
	{
		cin >> t;
		x.insert(t);
	}
	for (int i = 1; i <= n; ++i)
	{
		count = 0;
		for (int j = 1; j <= 7; ++j)
		{
			cin >> t;
			y.push_back(t);
		}
		for (vector <int> :: iterator k = y.begin(); k != y.end(); ++k)
		{
			if (x.find(*k) != x.end())
			{
				++count;
			}
		}
		y.clear();
		++a[8 - count];
	}
	//cout << a[7] << " ";
	for (int i = 1; i <= 7; ++i)
	 cout << a[i] << " ";
	return 0;
}
