#include <iostream>
#include <algorithm>

using namespace std;

int a[105];
int f[10005];

int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	int ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	 cin >> a[i];
	f[0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = m; j >= a[i]; --j)
		{
			//if (j >= a[i])
			 f[j] = f[j - a[i]] + f[j];
			//if (m - f[j] == 0)
			// ++ans;
		}
	}
	cout << f[m] << endl;
	return 0;
}
