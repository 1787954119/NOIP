/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

long long s[50][50][50];

long long w(long long a,long long b,long long c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	else if (s[a][b][c] != 0)
	 return s[a][b][c];
	else if (a > 20 || b > 20 || c > 20)
	{
		return s[a][b][c] = w(20,20,20);
	}
	else if (a < b && b < c)
	{
		return s[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	}
	else
	 return s[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	return s[a][b][c];
}

int main()
{
	long long a,b,c;
	//long long result = 0;
	//FILE * fin, *fout;
	//fin = fopen("abc.in","r");
	//fout = fopen("abc.out","w");
	while (1)
	{
		//fscanf(fin,"%d %d %d",&a,&b,&c);
		memset(s,0,sizeof(s));
		//scanf("%d %d %d",&a,&b,&c);
		cin >> a >> b >> c;
		if (b == -1 && a == -1 && c == -1)
		{
			return 0;
		}
		if(a>20) a=21;
        if(b>20) b=21;
        if(c>20) c=21;
		//cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a,b,c) << endl;
		printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
	}
	//fclose(fin);
	//fclose(fout);
	return 0;
}
*/
#include<bits/stdc++.h>//����ͷ�ļ� 
using namespace std;
long long f[25][25][25];//������̫������long long����¼�Ѽ������w(a,b,c)��ֵ 
long long dfs(long long a,long long b,long long c)//���Ѻ���dfs������w(a,b,c)��ֵ 
{
    if(a<=0||b<=0||c<=0) return 1;//�����С�ڵ���0�ģ�����1 
    if(a>20||b>20||c>20) return dfs(20,20,20);//����д���20�ģ�����w(20,20,20) 
    if(a<b&&b<c) {if(f[a][b][c]==-1) f[a][b][c]=dfs(a,b,c-1)+dfs(a,b-1,c-1)-dfs(a,b-1,c);}//���a<b��b<c��û����������ͽ��м��㣬������� 
    else if(f[a][b][c]==-1) f[a][b][c]=dfs(a-1,b,c)+dfs(a-1,b-1,c)+dfs(a-1,b,c-1)-dfs(a-1,b-1,c-1);//���ǰ�涼���ԣ�û����������ͽ��м��㣬������� 
    return f[a][b][c];//��󷵻�ֵ 
}
int main()//���Ŀ�ʼ�������� 
{
    memset(f,-1,sizeof(f));//�����м�������� 
    long long a,b,c;
    do
    { 
        cin>>a>>b>>c;
        if(a!=-1||b!=-1||c!=-1) printf("w(%d, %d, %d) = %d\n",a,b,c,dfs(a,b,c));//�м�Ŀո��ǿ� 
    }while(a!=-1||b!=-1||c!=-1);//�����������룬���ж� 
    return 0;//���Ľ����������� 
}
