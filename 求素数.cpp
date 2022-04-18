#include <stdio.h>
#include <math.h>
#include <string.h>

//int a[102];
bool b[102];

int main()
{
	for (int i = 0; i <= 100; ++i)
	 b[i] = 1;
	//memset(b,1,sizeof(b));
	for (int i = 2; i <= 100; ++i)
	{
		
		for (int j = 2; j < sqrt(i); ++j)
		{
			if (i % j == 0)
			{
				b[i] == 0;
				break;
			}
		}
	}
	for (int i = 2; i <= 100; ++i)
	{
		if (b[i] == 1)
		 printf("%d ",i);
	}
	return 0;
}
