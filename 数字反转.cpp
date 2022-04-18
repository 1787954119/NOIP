#include <iostream>
#include <cmath>

using namespace std;

int a[15];

int main()
{
	long long n,k;
	int i = 0,t = 0;
	cin >> n;
	k = n;
	if (n < 0)
	{
	 k = fabs(n);
	 cout << "-";
    }
	while (k > 0)
	{
		++i;
		a[i] = k % 10;
		k /= 10;
	}
	for (int j = 1; j <= i; ++j)
	{
		if (a[j] > 0)
		{
			t = j;
			break;
		}
	}
	for (int j = t; j <= i; ++j)
	{
		cout << a[j];
	}
	cout << endl;
	//for (int j = 1; j <= i; ++j)
	// cout << a[j];
	return 0;
}
