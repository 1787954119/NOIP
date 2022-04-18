#include <cstdio>
#include <cmath>

using namespace std;

long long a[100002];

int main()
{
	long long t = 0;
	long long left = 0,right = 0;
	int x = 0,x2;
	int n;
	long long m,p1,s1,s2;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	 scanf("%lld",&a[i]);
	scanf("%lld %lld %lld %lld",&m,&p1,&s1,&s2);
	a[p1] += s1;
	/*for (int i = 1; i <= n; ++i)
	{
		printf("%d ",a[i]);
	}*/
	for (int i = 1; i < m; ++i)
	{
		//a[i] = fabs(m - i) * a[i];
		left += a[i] * fabs(m - i);
	}
	for (int i = m + 1; i <= n; ++i)
	{
		//a[i] = fabs(i - m) * a[i];
		right += a[i] * fabs(m - i);
	}
	if (left == right)
	{
		printf("%lld\n",m);
		return 0;
	}
	x = fabs(left - right);
		int k = m;
	    for (int i = 1; i <= n; ++i)
	    {
	    	if (i < m)
	    	{
		    /*t = a[i];
		    a[i] = (a[i] + s2) * (m - i);*/
		    t = s2 * (m - i);
		    left = left + t;
		    x2 = fabs(left - right);
		    if (x2 < x)
		    {
		    	x = x2;
		    	k = i;
			}
			left = left - t;
		    }
		    else if (i > m)
		    {
		    /*t = a[i];
		    a[i] = (a[i] + s2) * (i - m);*/
		    t = s2 * (m - i);
		    right = right + (a[i] - t);
		    x2 = fabs(right - left);
		    if (x2 < x)
		    {
		    	x = x2;
		    	k = i;
			}
			right = right - t;
			}
	    }
	    printf("%lld\n",k);
	  
	//printf("\n%ld %ld\n",left,right);
	return 0;
}
