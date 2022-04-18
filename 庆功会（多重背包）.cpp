#include <iostream>
#include <algorithm>

using namespace std;

int v[505];
int w[505];
int s[505];
int f[6005];

int main()
{
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	 cin >> v[i] >> w[i] >> s[i];
	for (int i = 1; i <= n; ++i)
	{
		for (int j = m; j >= 1; --j)
		{
			for (int k = 1; k <= s[i]; ++k)
			{
				if (j >= k * v[i])
				 f[j] = max(f[j],f[j - k * v[i]] + k * w[i]);
				//else
				//{
				// f[j] = f[j];
				// break;
			    //}
			}
		}
	}
	//for (int i = 1; i <= n; ++i)
	//{
	//	for (int j = 1; j <= m; ++j)
	//	 cout << f[i][j] << " ";
	//	cout << endl;
	//}
	cout << f[m] << endl;
	return 0;
}

