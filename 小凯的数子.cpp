#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int q;
	long long l,r;
	long long ans = 0;
	cin >> q;
	for (int i = 1; i <= q; ++i)
	{
		cin >> l >> r;
		for (int j = l; j <= r; ++j)
		{
			ans += j;
		}
		cout << ans % 9 << endl;
		ans = 0;
	}
	return 0;
}
