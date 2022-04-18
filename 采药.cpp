#include <iostream>
#include <algorithm>

using namespace std;

int a[105];
int b[105];
int f[1005];

int main()
{
	ios::sync_with_stdio(false);
	int t,m;
	cin >> t >> m;
	for (int i = 1; i <= m; ++i)
	 cin >> a[i] >> b[i];
	for (int i = 1; i <= m; ++i)
	{
		for (int j = t; j >= 1; --j)
		{
			if (j >= a[i])
			 f[j] = max(f[j],f[j - a[i]] + b[i]);
		}
	}
	cout << f[t] << endl;
	return 0;
}
