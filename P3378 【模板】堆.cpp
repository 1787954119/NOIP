#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<long long,vector<long long>,greater<long long> > p;
	long long n;
	long long b;
	int a;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> b;
			p.push(b);
		}
		if (a == 2)
		{
			cout << p.top() << endl;
		}
		if (a == 3)
		{
			p.pop();
		}
	}
	return 0;
}
