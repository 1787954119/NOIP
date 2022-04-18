#include <iostream>

using namespace std;

int main()
{
	int k;
	int n = 1,t = 1;
	long long count = 0;
	cin >> k;
	while (t <= k)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (t <= k)
			count += n;
			else
			{
				cout << count << endl;
				return 0;
			}
			++t;
		}
		++n;
	}
	cout << count << endl;
	return 0;
}
