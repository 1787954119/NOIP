#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;


int a[300002];

struct Node
{
	int Time;
	int m;
};

queue<Node> q;

int main()
{
	int n;
	int b,c;
	int ans = 0;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d %d",&b,&c);
		for (int j = 1; j <= c; ++j)
		{
			Node x;
			scanf("%d",&x.m);
			x.Time = b;
			q.push(x);
			++a[x.m];
			if (a[x.m] == 1)
			 ++ans;
		}
		while (1)
		{
			int t,y;
			t = q.front().Time;
			y = q.front().m;
			if (b - t < 86400)
			 break;
			--a[y];
			if (a[y] == 0)
			 --ans;
			q.pop();
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
