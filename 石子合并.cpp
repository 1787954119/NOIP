#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int a[205];
int b[205];
int f[405][405];
int dp[405][405];

int main()
{
	ios::sync_with_stdio(false);
	int n,j;
	int ans1 = 0;
	int ans2 = 999999999;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		a[i + n] = a[i];
	}
	//b[0] = 0;
	for (int i = 1; i <= n * 2; ++i)
		b[i] = b[i - 1] + a[i];
	
	//memset (f , 0 , sizeof (f));
	//memset (dp , 0 , sizeof (dp));
	
	for (int t = 1; t <= n; ++t)
	{
		for (int i = 1; i <= n * 2 - t; ++i)
		{
			j = i + t;
			dp[i][j] = 999999999;
			for (int k = i; k < j; ++k)
			{
				f[i][j] = max(f[i][j],f[i][k] + f[k + 1][j] + b[j] - b[i - 1]);
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k + 1][j] + b[j] - b[i - 1]);
				//ans1 = max(ans1,f[i][j]);
				//ans2 = min(ans2,dp[i][j]);
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		ans1 = max(ans1,f[i][i + n - 1]);
		ans2 = min(ans2,dp[i][i + n - 1]);
	}
	cout << ans2 << endl << ans1 << endl;
	//cout << f[1][n] << endl << dp[1][n] << endl;
	return 0;
}
