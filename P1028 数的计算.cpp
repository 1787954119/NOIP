#include <iostream>

using namespace std;

int a[1005];

int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		if (i % 2 == 0)
		{
			a[i] = a[i - 1] + a[i / 2];
		}
		if (i % 2 == 1)
		 a[i] = a[i - 1];
	}
	cout << a[n] << endl;
	return 0;
}
