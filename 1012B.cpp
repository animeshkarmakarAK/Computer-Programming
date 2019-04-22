
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> c[400005];
//vector<int> r[200005];

int vis[400005];

void dfs(int x)
{
    if(vis[x]) return;
    vis[x]=1;
    for(int i=0; i<c[x].size(); i++) dfs(c[x][i]);
}

int main()
{
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    memset(vis,0,sizeof(vis));
    while(q--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        c[x].push_back(y+n);
        c[y+n].push_back(x);
    }
    int cnt=0;
    for(int i=1;i<=n+m;i++) if(!vis[i]) dfs(i),cnt++;
    printf("%d\n",cnt-1);
}

