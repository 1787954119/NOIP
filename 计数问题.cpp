#include <cstdio>

using namespace std;

int main()
{
	long long num = 0;
	long long n,m;
	int x;
	scanf("%ld %d",&n,&x);
	for (int i = 1; i <= n; ++i)
	{
		m = i;
		while (m > 0)
		{
			if (m % 10 == x)
			 ++num;
			m = m / 10;
		}
		
	}
	printf("%ld\n",num);
	return 0;
}
