#include <iostream>

using namespace std;

int a[11] = {6,2,5,5,4,5,6,3,7,6};
int count = 0;

int f(int x)
{
	int y = 0;
	int t = 0;
	if (x == 0)
	 return a[0];
	while (x > 0)
	{
		t = x % 10;
		y += a[t];
		x = x / 10;
	}
	return y;
}

/*void dfs(int x)
{
	for (int i = 0; i <= 9; ++i)
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				if (i + j == k)
				{
					if (a[i] + a[j] + a[k] == x)
					{
						++count;
					}
				}
			}
		}
	}
}*/

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	//dfs(n - 4);
	for (int i = 0; i <= 1000; ++i)
	{
		for (int j = 0; j <= 1000; ++j)
		{
			if (f(i) + f(j) + f(i + j) + 4 == n)
			{
				++count;
			}
		}
	}
	cout << count << endl;
	return 0;
}
