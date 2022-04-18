#include <iostream>
#include <cstring>
#include <queue>
//#include <bits/stdc++.h>

using namespace std;

int a[205][205];
bool flag[205][205];
int Count;
int l,n;
queue <int> solve;

void bfs(int x,int y,int step);

int main()
{
	//freopen("knight.in","r",stdin);
	//freopen("knight.out","w",stdout);
	int x,y;
	int x2,y2;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		Count = 999999;
		//memset(a,0,sizeof(a));
		memset(flag,0,sizeof(flag));
		cin >> l;
		cin >> x >> y;
		a[x][y] = 1;
		cin >> x2 >> y2;
		a[x2][y2] = 2;
		if (x == x2 && y == y2)
		{
			cout << 0 << endl;
			continue;
		}
		solve.push(a[x][y]);
		flag[x][y] = 1;
		bfs(x,y,0);
		while (!solve.empty())
		 solve.pop();
		a[x][y] = 0;
		a[x2][y2] = 0;
		cout << Count << endl;
	}
	
	return 0;
}

void bfs(int x,int y,int step)
{
	while (!solve.empty())
	{
		if (solve.front() == 2)
		{
			
			solve.pop();
			return ;
		}
		if (x + 2 <= l && y + 1 <= l || x + 1 <= l && y + 2 <= l || x - 1 >= 0 && y + 2 <= l || x - 2 >= 0 && y + 1 <= l || x - 1 >= 0 && y - 2 >= 0 || x + 1 <= l && y - 2 >= 0 || x + 2 <= l || y - 1 >= 0)
		{
			if (flag[x][y] == 0)
			{
				solve.push(a[x][y]);
				flag[x][y] = 1;
			}
		}
		solve.pop();
	}
}	
