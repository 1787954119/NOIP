#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int a;
	char b;
	int ans = 1;
	int num = 0;
	scanf("%d",a);
	while (cin >> b)
	{
		ans *= a;
		ans %= 10000;
		if (b == '+')
		{
			num += ans;
			num %= 10000;
			ans = 1;
		}
		scanf("%d",&a);
		a %= 10000;
	}
	ans *= a;
	num += ans;
	num %= 10000;
	printf("%d\n",num);
	return 0;
}
