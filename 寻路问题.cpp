#include<iostream>  
#include<algorithm>  
#include<vector>  
#include<queue>  

using namespace std;  
   
struct node
{  
    long long int v,w;  
};
  
vector<struct node> head[10010];  
const int inf = 0xfffffff;  
long long int n,m,s,dis[10010];  
int cx[10010];   
bool b[10010];  
queue<int> que;  
   
void add(int u,int v,int w)
{  
    struct node a;  
    a.v = v;  
    a.w = w;  
    head[u].push_back(a);  
}  
   
int main()
{  
    cin >> n >> m >> s;  
    for(int i = 1; i <= n; i++)  
        dis[i] = inf;  
    dis[s] = 0;  
    for(int i = 0; i < m; i++){  
        int u,v,w;  
        cin >> u >> v >> w;  
        if(u <= n && v <= n)  
            add(u,v,w);  
    }  
    que.push(s);  
    b[s] = true;  
    while(!que.empty())
	{  
        int p = que.front();  
        b[p] = false;  
        que.pop();  
        for(int i=0;i < head[p].size();i++)
		{  
            int u = p;
			int v = head[u].at(i).v;
			int w = head[u].at(i).w;  
            if(dis[v] > dis[u] + w)
			{  
                dis[v] = dis[u]+w;  
                if(b[v] == false)
				{  
                    que.push(v);  
                    b[v] = true;  
                }  
            }  
        }  
    }  
    /*
	for(int i=1;i<=n;i++)  
        if(dis[i]>=inf)  
            cout << "2147483647 ";  
        else   
            cout << dis[i]<<" ";  
    */        
    cout << endl;   
}
