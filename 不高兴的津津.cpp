#include <cstdio>
#include <algorithm>

using namespace std;

int a[10]; // ��ѧУ���Ͽ�ʱ�� 
int b[10]; // �ڿ��⸨������Ͽ�ʱ�� 

int main()
{
	bool p = false; 
	int c,d;
	int Max = 0;
	for (int i = 1; i <= 7; ++i)
	{
	 scanf("%d %d",&a[i],&b[i]);
	 c = a[i] + b[i];
	 if (c > 8)
	  p = true;
	 if (c > Max)
	 {
	 	d = i; // ��¼����˵������ڼ� 
	 	Max = c;
	 }
    }
    if (p == false)
     printf("0");
    else
    {
    	printf("%d\n",d);
	}
	return 0;
}
