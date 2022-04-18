#include <iostream>

using namespace std;

int a[15];

int main()
{
	ios::sync_with_stdio(false);
	int n;
	int ans = 0;
	for (int i = 1; i <= 10; ++i)
	 cin >> a[i];
	cin >> n;
	n = n + 30;
	for (int i = 1; i <= 10; ++i)
	 if (n >= a[i])
	  ++ans;
	cout << ans << endl;
	return 0;
}
