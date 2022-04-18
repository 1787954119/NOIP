#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

char a[20];

int main()
{
	//ios::sync_with_stdio(false);
	int n = 0;
	int ans = 0;
	gets(a);
	//scanf("%s",&a);
	n = strlen(a);
	ans = n;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == ' ' || a[i] == '\n')
		 --ans;
	}
	printf("%d\n",ans);
	//cin >> a;
	//cout << a << endl;
	//puts(a);
	return 0;
}
