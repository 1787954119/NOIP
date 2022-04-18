#include <iostream>
#include <cmath>

using namespace std;

int a[22];
bool b[22];
int count = 0;
long long ans = 0;
int N,K;
int k = 0;

bool judge(long long x)
{
	
	int w = sqrt(x);
	for (int i = 2; i < w; ++i)
	{
		if(x % i == 0)
		 return false;
	}
	return true;
}

/*void dfs(int x,int k,int p)
{
	if (k == 1 && judge(ans))
	{
		++count;
		return;
	}
	else if (k == 1 && !judge(ans))
	{
		
		return ;
	}
	for (int i = x; i <= N; ++i)
	{
		ans += a[i];
		dfs(i + 1,k - 1,i);
		ans -= p;
	}
}*/

void dfs(int p)
{
	if (k >= K && judge(ans))
	{
		++count;
		return ;
	}
	else if (k >= K && !judge(ans))
	{
		
		return ;
	}
	for (int i = p + 1; i <= N; ++i)
	{
		 ans += a[i];
		 ++k;
		 b[i] = true;
		 dfs(i);
		 ans -= a[i];
		 --k;
	}
	
}

int main()
{
	cin >> N >> K;
	for (int i = 1; i <= N; ++i)
	{
	 cin >> a[i];
	 
    }
	dfs(0);
	cout << count << endl;
	return 0;
}
