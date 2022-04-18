#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int n, m, k;

long long f[2][205][205], s[2][205][205];
char a[1005], b[205];
const int mod = 1000000007;

int main()
{
    scanf("%d%d%d", &n, &m, &k);
    scanf("%s", a + 1);
    scanf("%s", b + 1);
    int now = 1, last = 0;
    f[0][0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[now][0][0] = 1; //now && last ��ʾҪô�����ӣ��������ӣ�Ҫô������������Ϊ 0  
        for (int j = 1; j <= m; j++)
            for (int kk = 1; kk <= k; kk++)
            {
                if (a[i] == b[j])
                    s[now][j][kk] = (s[last][j - 1][kk] + f[last][j - 1][kk - 1]) % mod;
                else
                    s[now][j][kk] = 0; //��ǰ�Ĳ������ӣ�����Ϊ 0  
                f[now][j][kk] = (f[last][j][kk] + s[now][j][kk]) % mod;
            }
        swap(now, last); //һ��Ҫ�䣬�������һֱ�Լ����Լ�ת��.
    }
    printf("%lld\n", f[last][m][k]);

    return 0;
}
