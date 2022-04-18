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

int main()
{
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}
