#include <iostream>
#include <algorithm>

using namespace std;

int w[205];
int c[205];
int f[205];

int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	int Max;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i)
	 cin >> w[i] >> c[i];
	for (int i = 1; i <= n; ++i)
	{
		for (int j = m; j >= 0; --j)
		{
			if (j >= w[i])
			 f[j] = max(f[j],f[j - w[i]] + c[i]);
		}
	}
	cout << f[m] << endl;
	return 0;
} 
