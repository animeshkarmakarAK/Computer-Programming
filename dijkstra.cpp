#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,j,n) for(int i=j; i<(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define SIZE 20005
#define INF 1<<30
typedef long long ll;
typedef vector<int> vi;

vector<pii>adj[SIZE];
int d[SIZE];
int parent[SIZE];
int child[SIZE];

int minimumPath(int source, int dest)
{
    priority_queue<pii,vector<pii> , greater<pii> >q;
    q.push(pmp(0,source));
    d[source] = 0;

    while(!q.empty())
    {
        int u = q.top().second;
        cout<<u<<endl;
        q.pop();
        //cout<<u<<endl;

        rep(i,adj[u].size())
        {
            int v = adj[u][i].first;
            //cout<<v<<endl;
            if(d[u]+adj[u][i].second < d[v])
            {
                //cout<<d[u]<<d[v]<<endl;
                d[v] = d[u]+adj[u][i].second;
                q.push(pmp(-d[v],v));
                parent[v] = u;
                //child[u] = v;
                cout<<v<<endl;
                //if(dest == v)
                    //return 0;
            }
        }
    }
}
void graph()
{
    int u,v;
   while(cin>>u>>v, (u || v) != 0)
   {
       int cost;
       cin>>cost;
       adj[u].pb(pmp(v,cost));
       swap(u,v);
       adj[u].pb(pmp(v,cost));

   }
}

void path(int source, int dest)
{
    // full path
   /*rep(i,10)
   cout<<parent[i]<<"\t";
   cout<<endl;*/

   //shortest path
   cout<<"SHORTEST PATH(Last one is the source & first one is the destination)"<<endl;
   while(source != dest){
   cout<<dest<<"\t";
   dest = parent[dest];
   }
   cout<<source<<endl;
}
int main()
{
  mem(d,9999);
  rep(i,5)
  cout<<d[i]<<"\t";
  cout<<endl;
  mem(parent,0);
  graph();
  int source,dest;
  cin>>source>>dest;

  minimumPath(source,dest);
  // print shortest path
   path(source,dest);
 //minimumPath(1);
}
