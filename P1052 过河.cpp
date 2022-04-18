/*#include <iostream>
#include <algorithm>

using namespace std;

int f[10005];
int stone[105];
int 

int main()
{
	long long l;
	int s,t,m;
	int ans;
	cin >> l >> s >> t >> m;
	for (int i = 1; i <= m; ++i)
	{
		cin >> stone[i];
	}
	if (s == t)
	{
		for (int i = 1; i <= m; ++i)
		{
			if (stone[i] % s == 0)
			 ++ans;
		}
		cout << ans << endl;
		return 0;
	}
	sort(a + 1,sort + m + 1);
	a[m + 1] = l;
	for (int i = 1; i <= m; ++i)
	{
		if (a[i + 1] - a[i] > 90)
		{
			a[i + 1] = a[i] + (a[i + 1] - a[i] ) % 90;
		}
	}
	for ()
	return 0;
}*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int l,L,s,t,m,ans;
int a[100+10],f[9000+100],stone[9000+100];
int main() {

    scanf("%d%d%d%d",&l,&s,&t,&m);
    for(int i=1;i<=m;++i)scanf("%d",&a[i]);
    
    if(s==t) {
        for(int i=1;i<=m;++i)
            if(a[i]%s==0)++ans;
        printf("%d\n",ans);
        return 0;
    }
    
    sort(a+1,a+m+1);
    a[m+1]=l;
    for(int i=0;i<=m;++i) { 
        if(a[i+1]-a[i]>90)
            a[i+1]=a[i]+(a[i+1]-a[i])%90;
    }
    for(int i=1;i<=m;++i)
        stone[a[i]]=1;
    memset(f,0x3f,sizeof(f));
    for(int i=s;i<=t;++i)
        //f[i]=(stone[i]==1)?1:0;
        if (stone[i] == 1)
         f[i] = 1;
        else
         f[i] = 0;
    
    for(int i=s*2;i<=a[m+1];++i)
        for(int j=s;j<=t;++j) {
            if(i-j<0)break;
            f[i]=min(f[i],f[i-j]+stone[i]);
        }
    
    printf("%d\n",f[a[m+1]]);
    
    return 0;
}
