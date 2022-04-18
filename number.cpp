#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
#include<fstream>
using namespace std;
int num[30],f[260];
string mod,s;
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	getline(cin,mod);
	int cnt=1;
	for (int i=0;i<26;i++){
		num[int(mod[i])-'a'+1]=cnt;
		cnt++;
	}
	getline(cin,s);
	int l=s.length();
	s[l]=' ';
	cnt=0;
	int last=-1,sta=0,ans=0;
	for (int i=0;i<=l;i++){
		if (s[i]!=' '){
			last+=1;
		}
		if (s[i]==' '){
			for (int j=sta-1;j<=last+1;j++){
				f[j]=1;
			}
			for (int j=sta;j<=last;j++){
				for (int k=sta;k<j;k++){
					if (num[int(s[j])-'a'+1]>=num[int(s[k])-'a'+1]){
						f[j]=max(f[j],f[k]+1);
					}
				}
				ans=max(f[j],ans);
			}
			printf("%d",ans);
			ans=0;
			//printf("%d %d\n",sta,last);
			sta=last+2;
			last=sta-1;
		}
	}
	//printf("%c",s[0]);
	return 0;
}
