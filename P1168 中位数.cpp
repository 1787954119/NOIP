#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	priority_queue < int , vector<int> , greater<int> > p;
	vector <int> q;
	int n;
	int t = 0,x = 1,count = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> t;
		p.push(t);
	}
	for (int i = 1; i <= n; ++i)
	{
		q.push_back(p.top());
		p.pop();
	}
	//y = q.begin();
	//cout << *y << endl;
	n = (n + 1) / 2;
	for (int i = 1; i <= n; ++i)
	{
		t = 2 * i - 1;
		x = 1;
		//cout << q[(t / 2 + 1) - 1] << endl;
		/*for (vector <int> :: iterator j = q.begin(); j != q.end(); ++j)
		{
			if (x == (t / 2 + 1))
			{
				cout << *j << endl;
				break;
			}
			++x;
		}*/
		
	}
	/*
	t = pow(2,x);
	for (int i = 1; i <= n; ++i)
	{
		++count;
		q.push_back(p.top());
		if (count == t)
		{
			cout << p.top() << endl;
			++x;
			t = pow(2,x);
			while (!q.empty())
			{
				p.push(q.front());
				q.pop_front();
			}
		}
		p.pop();
	}
	*/
	
	return 0;
}
