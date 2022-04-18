#include <iostream>
#include <algorithm>

using namespace std;

int a[35];
int f[20005];

int main()
{
	ios::sync_with_stdio(false);
	int v,n;
	cin >> v >> n;
	
	for (int i = 1; i <= n; ++i)
	 cin >> a[i];
	for (int i = 1; i <= n; ++i)
	{
		for (int j = v; j >= 1; --j)
		{
			if (j >= a[i])
			 f[j] = max(f[j],f[j - a[i]] + a[i]);
		}
	}
	cout << v - f[v] << endl;
	return 0;
}
