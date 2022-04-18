#include <cstdio>

using namespace std;

int main()
{
	double a;
	double b = 2;
	double c = 0;
	int d = 0;
	scanf("%lf",&a);
	while (c < a)
	{
		c += b;
		b = b * 0.98;
		++d;
	}
	printf("%d\n",d);
	return 0;
}
