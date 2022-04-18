#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	int t = 0;
	while (b)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

long long lcm(int a,int b)
{
	int x = gcd(a,b);
	return a * b / x;
}

int main()
{
	int x,y;
	int count;
	int a,b;
	cin >> x >> y;
	for (int i = x; i <= y; ++i)
	{
		if (i % x != 0)
		 continue;
		for (int j = y; j >= x; --j)
		{
			
			if (gcd(i,j) == x && lcm(i,j) == y)
			 ++count;
		}
	}
	cout << count << endl;
	return 0;
}
