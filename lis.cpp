#include <iostream>
#include <algorithm>

using namespace std;

int a[10005];
int f[10005];

int main()
{
	int result = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	 cin >> a[i];
	for (int i = 1; i <= n; ++i)
	{
		f[i] = 1;
		for (int j = 1; j < i; ++j)
		{
			if (a[j] < a[i])
			{
				f[i] = max(f[i],f[j] + 1);
			}
		}
		result = max(result,f[i]);
	}
	cout << result << endl;
	return 0;
}
