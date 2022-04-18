#include<iostream>
using namespace std;
const int n=10;
int co(int i1)
{
    int j1,s1;
    s1=n;
    for(j1=n-1;j1>=n-i1+1;j1--)
    {
        s1=s1*j1 /(n-j1+1);
    }
    return s1;
}
int main()
{
    int s,i;
    s=n+1;
    for(i=2;i<=n;i++)
       s=s+ co(i);
    cout<<"s="<<s<<endl;
    return 0;
}

