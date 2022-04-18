#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum = 1;
	cout << "Please input the n: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		sum = 1;
		for (int j = 1; j <= i; ++j)
		{
			if (j > 1)
			sum = sum * (i - j + 1)/(j - 1);
			cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}
