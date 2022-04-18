#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

long long a[55];

int main()
{
	int n;
	//vector <long long> a(2,1);
	//vector <int> a(2,1);
	cin >> n;
	for (int i = 0; i < 55; ++i)
	{
		a[i] = 1;
	}
	for (int i = 2; i <= n; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
		//cout << a[i] << endl;
	}
	cout << a[n - 1] << endl;
	return 0;
}
