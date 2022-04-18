#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	char c[30];
	int b[30];
	int a;
	cin >> c;
	a = strlen(c);
	for (int i = 0; i < a; ++i)
	 b[i] = c[i] - '0';
	//cout << b << endl;
	for (int i = 0; i < a; ++i)
	 cout << b[i];
	return 0;
}
