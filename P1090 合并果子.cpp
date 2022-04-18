#include <bits/stdc++.h>

using namespace std;

int main()
{
	priority_queue < int,vector<int>,greater<int> > p;
	int n;
	int t,s,result = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> t;
		p.push(t);
	}
	t = 0;
	for (int i = 1; i <= n - 1; ++i)
	{
		s = 0;
		t = p.top();
		p.pop();
		s = p.top() + t;
		p.pop();
		p.push(s);
		result += s;
	}
	cout << result << endl;
	return 0;
}
