#include<algorithm>
#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#define N 7000005
using namespace std;

bool cmp(const int &a,const int &b){
    return a>b;
}

priority_queue<int>ans;
int cut1[N],now[N],cut2[N];
int n,m,q,u,v,t;
int sigma;
double p;
int h,h1,h2;
int t0,t1,t2;

int main(){
    scanf("%d%d%d%d%d%d",&n,&m,&q,&u,&v,&t);
    p=(double)u/v;int tmp;
    for(t0=1;t0<=n;++t0)
        scanf("%d",&now[t0]);
    --t0;t1=t2=0;h=h1=h2=1;
    sort(now+1,now+t0+1,cmp);//对所有蚯蚓从大到小排序
    int top;
    for(int i=1;i<=m;++i){
        if(h>t0)
		{
		if(cut1[h1] > cut2[h2])
		  top = cut1[h1++];
		else 
		  top = cut2[h2++];
		}
        else if(now[h] >= cut1[h1] && now[h] >= cut2[h2])
		         top = now[h],++h;
        else if(cut1[h1] >= cut2[h2] && now[h] <= cut1[h1])
		         top = cut1[h1],++h1;
        else 
		  top=cut2[h2],++h2;
        //上述四行都是为了找到应该被切的蚯蚓,写的麻烦细节很多
        top+=sigma;
        int a1=floor(p*(double)top),a2=top-a1;
        sigma+=q;
        a1-=sigma,a2-=sigma;
        cut1[++t1]=a1,cut2[++t2]=a2;
        if(i%t==0)
		 printf("%d ",top);
    }
    printf("\n");
    //合并三堆 
    for(int i=h;i<=t0;++i)ans.push(now[i]);
    for(int i=h1;i<=t1;++i)ans.push(cut1[i]);
    for(int i=h2;i<=t2;++i)ans.push(cut2[i]);
    for(int i=1;ans.size();++i){
        if(i%t==0)printf("%d ",ans.top()+sigma);
        ans.pop();
    }
    return 0;
}
