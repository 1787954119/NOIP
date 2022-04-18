//二维数组版本会导致一半的空间被浪费，只用到了半边数组 

#include <iostream>

using namespace std;

int main()
{
	int a[500][500] = {1};
	int n;
	cout << "Please input the n: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)//从0开始的话，第二层循环相当于没做事 
	{
		for (int j = 0; j < i; ++j)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
