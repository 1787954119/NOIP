#include <iostream>
#include <algorithm>

using namespace std;

int a[10005];
int b[10005];
int f[100005];

int main()
{
	ios::sync_with_stdio(false);
	int t,m;
	cin >> t >> m;
	for (int i = 1; i <= m; ++i)
	 cin >> a[i] >> b[i];
	for (int i = 1; i <= m; ++i)
	{
		for (int j = a[i]; j <= t; ++j)
		{
			if (j >= a[i])
			 f[j] = max(f[j],f[j - a[i]] + b[i]);
		}
	}
	cout << f[t] << endl;
	return 0;
}
