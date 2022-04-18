#include <iostream>
#include <cmath>
#include <vector>
#include <iterator> 
#include <algorithm>

using namespace std;

//vector <long long> a;
long long a[78500];

void init()
{
	int t = 0;
	bool flag = true;
	for (int i = 2; i <= 1000000; ++i)
	{
		flag = true;
		for (int j = 2; j <= sqrt(i); ++ j)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			//a.push_back(i);
			a[t] = i;
			++t;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	init();
	long long count = 0;
	long long n,m;
	long long l,r;
	int j = 0;
	//vector <long long> :: iterator x; 
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		cin >> l >> r;
		if ((l < 1 || l > m) || (r < 1 || r > m))
		{
			cout << "Crossing the line" << endl;
			continue;
		}
		count = 0;
		//x = a.begin();
		j = 0;
		while (j < 78498)
		{
			if (a[j] >= l && a[j] <= r)
			 ++count;
			++j;
		}
		cout << count << endl;
	}
	return 0;
}
