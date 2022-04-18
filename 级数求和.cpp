#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long i = 1;
	double s = 0;
	int k = 0;
	cin >> k;
	while (s <= k)
	{
		s += 1 / double(i);
		++i; 
	}
	cout << i - 1 << endl;
	return 0;
}
