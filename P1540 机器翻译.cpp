#include <iostream>
#include <deque>
#include <vector>
#include <iterator>

using namespace std;

int a[1005];

int main()
{
	bool pd = false;
	int m,n,t;
	int count = 0;
	int num = 0;
	deque <int> b;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		pd = false;
		for (deque <int> :: iterator j = b.begin(); j != b.end(); ++j)
		{
			if (*j == a[i])
			{
				pd = true;
				break;
			}
		}
		if (pd == false && num < m)
		{
			++count;
			++num;
			b.push_back(a[i]);
		}
		else if (pd == false && num >= m)
		{
			++count;
			b.pop_front();
			b.push_back(a[i]);
		}
	}
	cout << count << endl;
	return 0;
}
