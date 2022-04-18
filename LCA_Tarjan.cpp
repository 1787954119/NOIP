#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
const int N=10000+5;
vector <int> son[N];
int T,n,depth[N],fa[N],in[N],a,b;
void dfs(int prev,int rt){
    depth[rt]=depth[prev]+1;
    fa[rt]=prev;
    for (int i=0;i<son[rt].size();i++)
        dfs(rt,son[rt][i]);
}
int LCA(int a,int b){
    if (depth[a]>depth[b])
        swap(a,b);
    while (depth[b]>depth[a])
        b=fa[b];
    while (a!=b)
        a=fa[a],b=fa[b];
    return a;
}
int main(){
    scanf("%d",&T);
    while (T--){
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
            son[i].clear();
        memset(in,0,sizeof in);
        for (int i=1;i<n;i++){
            scanf("%d%d",&a,&b);
            son[a].push_back(b);
            in[b]++;
        }
        depth[0]=-1;
        int rt=0;
        for (int i=1;i<=n&&rt==0;i++)
            if (in[i]==0)
                rt=i;
        dfs(0,rt);
        scanf("%d%d",&a,&b);
        printf("%d\n",LCA(a,b));
    }
    return 0;
}
