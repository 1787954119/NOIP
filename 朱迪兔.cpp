#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct node
{
	int x;
	int y;
	int h;
}a[300];

int b[55][55];
int f[55][55];

struct rule 
{
	bool operator() (const node & s1,const node & s2)
	{
		return s1.h < s2.h;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1 ; j <= n; ++j)
		{ 
		 cin >> b[i][j];
		 a[i * n + j].x = i;
		 a[i * n + j].y = j;
		 a[i * n + j].h = b[i][j]; 
		 f[i][j] = 1;
		} 
	}
	sort(a + 1,a + n * 2,rule());
	for (int i = 1; i <= n * 2; ++i)
	{
		int x1 = a[i].x;
		int y1 = a[i].y;
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		
		if (y1 > 0 && b[x1][y1] > b[x1][y1 - 1])
		{
			int v = pow(fabs(x1 - x1) + fabs(y1 - (y1 - 1)) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
		if (x1 > 0 && b[x1][y1] > b[x1 - 1][y1])
		{
			int v = pow(fabs(x1 - (x1 - 1)) + fabs(y1 - y1) , 2);
			f[x1][y1] = max(f[x1][y1],f[x1 - 1][y1] + v);
		}
	}
	return 0;
}
