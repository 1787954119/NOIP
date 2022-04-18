#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	char c[200];
	strcpy(c,"123456"); // c = "123456" error 不能直接赋值字符串 
	cout << c << endl;
	return 0;
}
