#include <iostream>
#include <cmath>
#include <vector>
#include <iterator> 
#include <algorithm>

using namespace std;

vector <int> a;

void init()
{
	bool flag = true;
	for (int i = 2; i <= 10000; ++i)
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
			a.push_back(i);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	//nit();
	//for (vector <int> :: iterator i = a.begin() + 1; i != a.end(); ++i)
	for (int i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
		cout << n / i << endl;
		break;
	    }
	}
	
	return 0;
}
