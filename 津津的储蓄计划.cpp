#include <cstdio>

using namespace std;

int a[15]; //ÿ���µ�Ԥ�� 

int main()
{
	int b = 0; // ÿ���µĽ��� 
	//int c = 0; // �洢ûǮ�õĵ�һ���� 
	int d = 0; // ÿ���¿����ڴ����Ǯ�� 
	double ans = 0; // ���ʣ�µ�Ǯ��  
	for (int i = 1; i <= 12; ++i)
	 scanf("%d",&a[i]);
	for (int i = 1; i <= 12; ++i)
	{
		b += 300 - a[i];
		if (b < 0)
		{
			printf("-%d\n",i);
			return 0;
		}
		if (b > 100)
		{
			d = b / 100 * 100;
			ans += d;
			b -= d;
		}
	}
	ans *= 1.2;
	printf("%.0lf\n",ans + b);
	return 0;
}
