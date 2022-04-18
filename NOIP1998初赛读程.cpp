#include <iostream>
#include <cstdio>

using namespace std;

const int n = 4;
int i,j,i1,j1,k,s,t,s1,l,swapp;
char temp,a[n * 2 + 1];

int main()
{
	ios::sync_with_stdio(false);
	for (int i = 1; i <= 2 * n; ++i)
	 a[i] = getchar();
	s = 0;
	t = 0;
	for (int i = 1; i <= n * 2; ++i)
	 if (a[i] == '1')
	  ++s;
	 else if (a[i] == '0')
	  ++t;
	if (s != n || t != n)
	 printf("error");
	else
	{
		s1 = 0;
		for (int i = 1; i <= 2 * n - 1; ++i)
		 if (a[i] != a[i + 1])
		  ++s1;
		printf("jamp = %d\n",s1);
		swapp = 0;
		for (int i = 1; i <= 2 * n - 1; ++i)
		 for (int j = i; j <= 2 * n; ++j)
		  if (a[i] != a[j])
		  {
		  	temp = a[i];
		  	a[i] = a[j];
		  	a[j] = temp;
		  	s = 0;
		  	for (int l = 1; l <= 2 * n - 1; ++l)
		  	 if (a[l] != a[l + 1])
		  	  ++s;
		  	if (s > swapp)
		  	{
		  		swapp = s;
		  		i1 = i;
		  		j1 = j;
			}
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		  }
		if (swapp > 0)
		 printf("maxswap = %d i = %d j = %d",swapp - s1,i1,j1);
	}
	return 0;
}
