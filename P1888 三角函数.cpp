#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(int a,int b)
{
	if (b == 0)
	 return a;
	else 
	 return gcd(b,a % b);
}

int main()
{
	int x[5];
	int a,b,c;
	cin >> a >> b >> c;
	x[0] = a;
	x[1] = b;
	x[2] = c;
	sort(x,x+3);
	a = x[0];
	b = x[1];
	c = x[2];
	int d = gcd(a,c);
	a = a / d;
	c = c / d;
	cout << a << "/" << c << endl;
	return 0;
}
