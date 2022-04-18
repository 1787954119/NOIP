#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
	int h;
	int x;
	int x2;
}a[105];

bool rule(Node b,Node c)
{
	return b.h < c.h;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].h >> a[i].x >> a[i].x2;
	}
	sort(a,a+n,rule);
	
	return 0;
}
