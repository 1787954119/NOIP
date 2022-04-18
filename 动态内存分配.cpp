#include <stdio.h>
#include <malloc.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	int * p = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	 scanf("%d",&p[i]);
	for (int i = 0; i < n; ++i)
	 printf("%d ",p[i]);
	free(p);
	return 0;
}
