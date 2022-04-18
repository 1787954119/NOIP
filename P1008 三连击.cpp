#include <iostream>

using namespace std;

int main()
{
	int x,y,z,t;
	int a1,a2,a3;
	cin >> a1 >> a2 >> a3;
	for (int a = 1; a <= 9; ++a)
	{
		for (int b = 1; b <= 9; ++b)
		{
			for (int c = 1;c <= 9; ++c)
			{
				for (int d = 1; d <= 9; ++d)
				{
					for (int e = 1; e <= 9; ++e)
					{
						for (int f = 1; f <= 9; ++f)
						{
							for (int g = 1; g <= 9; ++g)
							{
							for (int h = 1; h <= 9; ++h)
							{
								for (int i = 1; i <= 9; ++i)
								{
									if ((a != b) && (b != c) && (c != d) && (d != e) && (e != f) && (f != g) && (g != h) && (h != i))
									{
										x = a * 100 + b * 10 + c;
										y = d * 100 + e * 10 + f;
										z = g * 100 + h * 10 + i;   
										t = (x + y + z) / (a1 + a2 + a3);
										if ((t * a1 == x) && (t * a2 == y) && (t * a3 == z))
										 cout << x << " " << y << " " << z << " " << endl;
									}
								}
							}	
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
