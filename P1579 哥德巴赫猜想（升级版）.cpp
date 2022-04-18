#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <cmath>

using namespace std;

vector <int> a;
set <int> b;

void init()
{
	bool flag = true;
	for (int i = 2; i <= 100000; ++i)
	{
		flag = true;
		for (int j = 2; j <= sqrt(i); ++j)
		{
			if (i % j == 0)
			{
				flag = false;
			}
		}
		if (flag == true)
		{
			a.push_back(i);
		}
	}
}

void dfs(int n)
{
	for (vector <int> :: iterator i = a.begin(); i != a.end(); ++i)
	{
		if (n == 0)
		 return;
		if (n - *i >= 0)
		{
			n = n - *i;
		}
		dfs(n);
	}
}

int main()
{
	int n;
	cin >> n;
	init();
	dfs(n);
	for (set <int> :: iterator i = b.begin(); i != b.end(); ++i)
	{
		cout << *i << " ";
	}
	return 0;
}
