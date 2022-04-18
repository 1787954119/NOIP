#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct Map
{
	int x;
	int y;
}pre[1001][1001];//记录结点的坐标 
bool visit[1001][1001];//记录当前路径是否已经被扩展 
int map[1001][1001];//存储地图 
int a[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};//存储4个方向 

bool in (int x,int y) //判断当前位置是否超出范围 
{
	if (x < 0 || x > 4 || y < 0 || y > 4)
	 return false;
	return true;
}

void bfs()
{
	int i,j,k;
	queue <Map> q;
	while (!q.empty())//清空队列 
	 q.pop();
	visit[0][0] = true;
	Map cur;
	cur.x = 0;
	cur.y = 0;
	q.push(cur);
	while (!q.empty())
	{
		cur = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int x = a[i][0] + cur.x;
			int y = a[i][1] + cur.y;
			if (in (x,y) && !visit[x][y] && !map[x][y])
			{
				Map temp;
				visit[x][y] = true;
				temp.x = x;
				temp.y = y;
				q.push(temp);
				pre[x][y].x = cur.x;
				pre[x][y].y = cur.y; 
			}
		}
	 } 
}

void PrintWay(int x,int y)
{
	int i,j,k;
	if (x == 0 && y == 0)
	{
		cout << x + 1 << y + 1 << endl;
		return ;
	}
	PrintWay(pre[x][y].x, pre[x][y].y);
	cout << x + 1 << y + 1;
}

int main()
{
	for (int i = 0; i < 5; ++i)
	 for (int j = 0; j < 5; ++j)
	  cin >> map[i][j];;
	for (int i = 0 ; i < 1001; ++i)
	 for (int j = 0; j < 1001; ++j)
	  visit[i][j] = false;
	bfs();
	PrintWay(4,4);
	return 0;
}
