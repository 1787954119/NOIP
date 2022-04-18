#include <iostream>
#include <cstring> 

using namespace std;

char a[60];

int main()
{
	int n = 0;
	int x = 0;
	cin >> n >> a;
	x = strlen(a);
	for (int i = 0; i < x; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			++a[i];
			if (a[i] > 122)
			 a[i] = 97;
		}
		cout << a[i] ;
	}
	cout << endl;
	return 0;
}
