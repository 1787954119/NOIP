#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool judge(int k)
{
	for (int i = 2; i <= sqrt(k); ++i)
	{
		if (k % i == 0)
		 return false;
	}
	return true;
}

bool isPalindrome(int x) 
{
        if (x < 0 || (x > 0 && x % 10 == 0)) return false;
        int back = 0;
        while (x > back) 
		{
            back = back * 10 + x % 10;
            x = x / 10;
        }
        if (x == back)
          return 1;
        else
		  return (x == back / 10);
}
/*
bool isPalindrome(int x) 
{
        int sum=0;
        if(x<0 || (x/10!=0 && x%10==0))
        {
            return false;
        }
        else{
           while(x>sum)
           {
               sum  = sum * 10 + x%10;
               x = x/10;
           }
        }
        //若整数为偶数
        if(sum == x)
        {
            return true;
        }
        //若整数位数为奇数
        if(sum/10 == x)
        {
            return true;
        }
        return false;
}
*/

int main()
{
	int a,b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (isPalindrome(i))
		{
			if (judge(i))
			 cout << i << endl;
		}
	}
	return 0;
}
