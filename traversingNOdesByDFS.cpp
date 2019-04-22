#include<bits/stdc++.h>

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX  100

vector<int>edges[MAX];
int visited[MAX];

void dfs(int node)
{
    if(visited[node])
        return ;
   visited[node] = 1;
   rep(k,edges[node].size()){
       int v = edges[node][k];
       cout<<v<<endl;
       dfs(v);
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    mem(visited,0);
    int u,v;
    while(cin>>u>>v, (u && v)!=0)
    {
        edges[u].pb(v);
        swap(u,v);
        edges[u].pb(v);
    }
   dfs(1);
}
