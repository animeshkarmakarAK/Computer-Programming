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
#define MAX 100

vector<int>edge[MAX];
int visited[MAX];
int x;
int counter = 0;

int dfsagain(int node)
{
    visited[node] = 1;
    rep(i,edge[node].size())
    {
        int v = edge[node][i];
        if(!visited[v]){
                counter++;
            dfsagain(v);
        }
        else
            return 0;
    }
}
void dfs(int source){

 //if(visited[source])
   // return;
 visited[source] = 1;

   for(int i = 0; i < edge[source].size(); ++i)
 {
     int v = edge[source][i];

     if(visited[v] == 0){
     cout<<v<<endl;
     x = v;
     ++counter;
     dfs(v);
     }
 }

}

int main()
{
    int u,v;
 while(cin>>u>>v, (u || v) != 0){
    edge[u].pb(v);
    swap(u,v);
    edge[u].pb(v);
 }
    mem(visited,0);
    cout<<"starting node"<<endl;
    int source;
    //cin>>source;
    //dfs(source);
    //cout<<x<<" "<<counter <<endl;
    //dfs(x);

    dfsagain(1);
    cout<<counter<<endl;
}
