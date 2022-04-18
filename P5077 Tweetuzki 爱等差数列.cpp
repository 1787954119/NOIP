#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long s,t;
	//double b = 0;
	//int a = 0;
	cin >> s;
	t = s * 2;
	for(long long i = sqrt(t) + 1; i >= 1; --i)
	{
		//b = (t / i) - (i + 1) / 2;
		if ((t - i * i + i) % (2 * i) == 0 && (t - i * i + i) > 0)
		{
			//if (b - int(b) != 0)
			//{
			//(t - i * i + i) / (2 * i)
			 cout << (t - i * i + i) / (2 * i) << " " << (t - i * i + i) / (2 * i) + i - 1 << endl;
			 return 0;
			// return 0;
		    //}
		}
	}
	return 0;
}
