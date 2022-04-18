#include <iostream>

using namespace std;

int count = 0;
int N,K;

void dfs(int n,int k,int p)
{
	if (k == 1)
	{
		++count;
		return ;
	}
	for (int i = p; i <= n / k; ++i)
	{
		
		dfs(n - i, k - 1, i);
	}
	
}

int main()
{
	cin >> N >> K;
	dfs(N,K,1);
	cout << count << endl;
	return 0;
}
