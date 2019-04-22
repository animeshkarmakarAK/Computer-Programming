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

vector<int>adj[MAX];
int visited[MAX];
int in_order[MAX];
/*void top_sort(int n)
{
    // indegree of nodes
    mem(in_order,0);
    repp(i,1,n)
    {
        rep(k,adj[i].size())
        {
            if(adj[i][k])
                in_order[adj[i][k]]++;
        }
    }

    repp(i,1,n)
    cout<<in_order[i]<<"\t";
    cout<<endl;

    repp(k,1,n)
    {
        if(in_order[k] == 0)
        {
            v.push(i);
            rep(i,adj[i].size())
            inorder[adj[k][i]]-=1;
        }
    }

    queue<int>q;

    repp(i,1,n)
    if(in_order[i] == 0)
        q.push(i);

    while(!q.empty())
    {
        int u = q.front(),q.pop();

        visited[u] = 1;

        rep(i,adj[u].size())
        {
            int v = adj[u][i];
            in_order[v] -= 1;
            if(visited[v] == 0)
                q.push(v);

        }
    }
}*/

 int cycleDetection(int source)
 {
     visited[source] = 1;
     queue<int>q;
     q.push(source);

     while(!q.empty())
     {
         int u = q.front();
         q.pop();

         rep(i,adj[u].size())
         {
             int v = adj[u][i];
             if(visited[v] == 1)
                return 1;
             else
                visited[v] = 1;
             q.push(v);
         }
     }
 }
 stack<int>s;
 int topo_sort(int u)
 {
     visited[u] = 1;
     rep(i,adj[u].size()){
     int v = adj[u][i];
    // if(!visited[v])
     topo_sort(v);
     }
     s.push(u);

 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // acyclic directed graph
    set<int>node;
    int u,v;
 while(cin>>u>>v , (u || v) != 0)
 {
     adj[u].pb(v);
     node.insert(u);
 }
 //In order to contain topological sorting the graph must not contain cycle .. so first have to check for cycle
  //cout<<"cycle detected or not "<<cycleDetection(1)<<endl;

  // sort now
 //cout<<node<<endl;
 int n = node.size();

  mem(visited,0);
  repp(i,1,6)
  if(!visited[i])
  topo_sort(i);

  while(!s.empty())
  {
      cout<<s.top()<<"\t";
      s.pop();
  }
}
