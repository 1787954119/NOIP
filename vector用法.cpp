#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector <int> a;
	int b;
	for (int i = 0; i < 10; ++i)
	{
		cin >> b;
		a.push_back(b);
	}
	for (vector <int> :: iterator i = a.begin(); i != a.end(); ++i)
	{
		cout << *i << " " ;
		
	}
	cout << endl;
	return 0;
}
