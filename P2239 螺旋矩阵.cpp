#include <iostream>

using namespace std;

int main()
{
	int x,y,n;
	int count = 1;
	int i = 1,j = 1;
	cin >> n >> x >> y;
	for (int a = 1; a <= n * n; ++a)
	{
	while (j <= n)
	{
		cout << count << endl;
		++count;
		++j;
	}
		while (i <= n)
	{
		cout << count << endl;
		++count;
		++i;
	}
		while (j >= 1)
	{
	    cout << count << endl;
		++count;
		--j;
	}
		while (i >= 1)
	{
		cout << count << endl;
		++count;
		++i;
	}
    }
	return 0;
}
