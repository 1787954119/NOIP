#include <cstdio>

using namespace std;

int a[15]; //每个月的预算 

int main()
{
	int b = 0; // 每个月的结余 
	//int c = 0; // 存储没钱用的第一个月 
	int d = 0; // 每个月可用于储蓄的钱数 
	double ans = 0; // 最后剩下的钱数  
	for (int i = 1; i <= 12; ++i)
	 scanf("%d",&a[i]);
	for (int i = 1; i <= 12; ++i)
	{
		b += 300 - a[i];
		if (b < 0)
		{
			printf("-%d\n",i);
			return 0;
		}
		if (b > 100)
		{
			d = b / 100 * 100;
			ans += d;
			b -= d;
		}
	}
	ans *= 1.2;
	printf("%.0lf\n",ans + b);
	return 0;
}
