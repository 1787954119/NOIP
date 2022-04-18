#include <iostream>

using namespace std;

int a[5];
int b[5];
int c[5];

int main()
{
	ios::sync_with_stdio(false);
	int u = 1;
	int t;
	bool pd = true;
	for (int i = 100; i <= 999; ++i)
	{
		t = i;
		while (a > 0)
		{
			a[u] = t % 10;
			t = t / 10;
			++u;
		}
		for (int j = 100; j <= 999; ++j)
		{
			u = 1;
			t = j;
			while (t > 0)
			{
				b[u] = t % 10;
				t = t / 10;
				++u;
			}
			for (int k = 100; k <= 999; ++k)
			{
				u = 1;
				t = k;
				while (t > 0)
				{
					c[u] = t % 10;
					++u;
					t = t / 10;
				}
				for (int p = 1; p <= 3; ++p)
				{
					if (a[p] == b[p] || b[p] == c[p] || a[p] == c[p])
					 {
					 pd = false;
					 break;
				     }
				}
				if (pd && i * 2 == j && i * 3 == k)
				{
					cout << i << " " << j << " " << k <<endl;
				}
			}
		}
	}
	return 0;
}
