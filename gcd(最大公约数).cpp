int gcd(int a,int b)
{
	int c;
	while (b > 0)
	{
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}
