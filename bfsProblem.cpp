#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef vector<int> vi;
typedef vector<int,int>vii;
typedef vector<pii> vpi;
#define MAX 100001

vector<int>adj[MAX];
int visited[MAX];
int t_time;
int m_time;
int d_time;

int dfs(int m, int s, int d)
{
    t_time++;

    int u = d;
    //cout<<u<<"\t";
    visited[u] = 1;
    if(u == s && m == 1)
        return 1;
     if(u == 1)
            m_time = t_time;
     if(u == s)
           d_time = t_time;
    //if(u == m)
      //  return 0;
    rep(i,adj[u].size()){
    int v = adj[u][i];
    if(v == m){
        cout<<v<<endl;
        continue;
    }
    if(!visited[v])
        dfs(m,s,v);
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int edge;
    cin>>edge;

    int u,v;

    rep(i,edge-1)
    {
      cin>>u>>v;
      adj[u].pb(v);
      adj[v].pb(u);
    }

    int q;
    cin>>q;

    int m,start,dest;
    rep(i,q-1)
    {
        t_time = 0;
        d_time = 0;
        m_time = 0;
        mem(visited,0);
        cin>>m>>start>>dest;
        int r = dfs(m,start,dest);
        if(m == 1)
            {
             if(r == 1)
               cout<<"YES"<<endl;
               else
                cout<<"NO"<<endl;
            }
            else{
                if(d_time <= t_time)
                    cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;

            }

         }

    return 0;
}
