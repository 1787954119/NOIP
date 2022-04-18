#include <iostream>
#include <cstdio>

using namespace std;

int a[2002][2002];
int b[2002][2002];

int main()
{
	int t,k;
	int n,m;
	scanf("%d %d",&t,&k);
	a[1][1] = 1;
	for (int i = 0; i <= 2000; ++i)
	 a[i][0] = 1;
	for (int i = 2; i <= 2000; ++i)
	{
		for (int j = 1; j <= i; ++j)
		 a[i][j] = (a[i - 1][j] + a[i - 1][j - 1]) % k;
	} 
	for (int i = 2; i <= 2000; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
			if (a[i][j] == 0)
			 ++b[i][j];
		}
		b[i][i + 1] = b[i][i];
		
	}
	for (int i = 1; i <= t; ++i)
	{
		scanf("%d %d",&n,&m);
		if (m > n)
		 m = n;
		printf("%d\n",b[n][m]);
	}
	return 0;
}
