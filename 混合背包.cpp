#include <iostream>
#include <algorithm>

using namespace std;

int w[35];
int c[35];
int p[35];
int f[35][205];

int main()
{
	ios::sync_with_stdio(false);
	int v,n;
	cin >> v >> n;
	for (int i = 1; i <= n; ++i)
	 cin >> w[i] >> c[i] >> p[i];
	for (int i = 1; i <= n; ++i)
	{
			if (p[i] == 1)
			{
				for (int j = 1; j <= v; ++j)
				{
				if (j >= w[i])
				 f[i][j] = max(f[i - 1][j],f[i - 1][j - w[i]] + c[i]);
				else
				 f[i][j] = f[i - 1][j];
			    }
			}
			else if (p[i] == 0) 
			{
				for (int j = 1; j <= v; ++j)
				{
				if (j >= w[i])
				 f[i][j] = max(f[i - 1][j],f[i][j - w[i]] + c[i]);
				else
				 f[i][j] = f[i - 1][j];
			    }
			}
			else
			{
				for (int j = 1; j <= v; ++j)
				{
				for (int k = 1; k <= p[i]; ++k)
				{
					if (j >= w[i])
					 f[i][j] = max(f[i - 1][j],f[i][j - w[i]] + c[i]);
					else
					 f[i][j] = f[i - 1][j];
				}
			    }
			}
	}
	cout << f[n][v] << endl;
	return 0;
}
