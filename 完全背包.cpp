#include <iostream>
#include <algorithm>

using namespace std;

int w[35];
int c[35];
int f[205];

int main()
{
	ios::sync_with_stdio(false);
	int n,m;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i)
	 cin >> w[i] >> c[i];
	for (int i = 1 ; i <= n; ++i)
	{
		for (int j = w[i]; j <= m; ++j)
		{
			//for (int k = 0; k <= j / w[i]; ++k)
			//{
				if (j >= w[i])
				 f[j] = max(f[j],f[j - w[i]] + c[i]);
				else
				 f[j] = f[j];
			//}
		}
	}
	//for (int i = 1; i <= n; ++i)
	//{
	//	for (int j = 1; j <= m; ++j)
	//	 cout << f[i][j] << " ";
	//	cout << endl;
	//}
	cout << "max=" << f[m] << endl;
	return 0;
} 
