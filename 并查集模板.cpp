#include <iostream>

using namespace std;

int boss[200005];

int find_boss(int root)
{
	int son,tmp;
	son = root;
	while (root != boss[root])
	{
		root = boss[root];
	}
	while (son != root)
	{
		tmp = boss[son];
		boss[son] = root;
		son = tmp;
	}
	return root;
}

void change(int root,int root2)
{
	int x,y;
	x = find_boss(root);
	y = find_boss(root2);
	if (x != y)
	{
		boss[x] = y;
	}
}

int main()
{
	int x,y,z;
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	 boss[i] = i;
	for (int i = 1; i <= m; ++i)
	{
		cin >> z >> x >> y;
		if (z == 1)
		{
			change(x,y);
		}
		else 
		{
			if (find_boss(x) == find_boss(y))
			 cout << "Y" << endl;
			else
			 cout << "N" << endl;
		}
	}
	return 0;
}
