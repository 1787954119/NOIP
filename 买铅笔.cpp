#include <cstdio>
#include <cmath>

using namespace std;

int a[5];
int b[5];

int main()
{
	int n;
	int t;
	long long x;
	long long ans = 999999999999999;
	scanf("%d",&n);
	for (int i = 1; i <= 3; ++i)
	{
		scanf("%d %d",&a[i],&b[i]);
		t = ceil(double(n) / a[i]);
		x = t * b[i];
		if (ans > x)
		 ans = x;
	}
	printf("%ld\n",ans);
	return 0;
}
