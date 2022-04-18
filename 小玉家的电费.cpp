#include <cstdio>

using namespace std;

int main()
{
	double a;
	scanf("%lf",&a);
	if (a <= 150)
	{
		a = a * 0.4463;
		printf("%.1lf\n",a);
	}
	else if (a >= 151 && a <= 400)
	{
		a = (a - 150) * 0.4663 + 150 * 0.4463;
		printf("%.1lf\n",a);
	}
	else
	{
		a = (a - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
		printf("%.1lf\n",a);
	}
	return 0;
}
