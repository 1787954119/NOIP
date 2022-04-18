#include <iostream>

using namespace std;

int last[2000005];
int sum[2000005];
int cnt[2000005];

int main()
{
	int n,k,p;
	int color,price;
	int now;
	int ans;
	cin >> n >> k >> p;
	for (int i = 1; i <= n; ++i)
	{
		cin >> color >> price;
		if (price <= p)
		 now = i;
		if (now >= last[color])
		 sum[color] = cnt[color];
		last[color] = i;
		ans = ans + sum[color];
		++cnt[color];
	}
	cout << ans << endl;
	return 0;
}
