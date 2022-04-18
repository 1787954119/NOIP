#include <cstdio>
#include <algorithm>

using namespace std;

int a[10]; // 在学校的上课时间 
int b[10]; // 在课外辅导班的上课时间 

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
	 	d = i; // 记录最不高兴的是星期几 
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
