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
#define MAX 100
#define INF 0x3f3f3f3f
typedef vector<int> vi;
typedef vector<pii>vii;

//vii adj[MAX+5];


int Dist[MAX+5],parent[MAX];  // for storing the distance of every other node from source.
/*==========================================*/
/*int Dijkstra(int source, int destination) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
    //Dist.assign(N,INF);
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        rep(i,adj[u].size()){
            int v = adj[u][i].first;
            int w = adj[u][i].second;
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                //if(v == destination)
                    //return Dist[v];
                Q.push({Dist[v],v});
                //parent[v] = u; // for printing the shortest path
            }
        }
    }
    return Dist[destination];
}

/*void printShortestPath(int parent[],int j)
{
    if(parent[j] == -1)
        return;
    printShortestPath(parent,parent[j]);
     cout<<j<<"\t";
}*/


/*===================================================*/
//vi adj[MAX];
int visited[MAX];
int bfs(vi adj[],int s, int hq)
{
    queue<int>q;
    q.push(s);
    visited[s] = 1;
    int t = 0;
    while(!q.empty())
    {
        int u = q.front();
        t++;
        q.pop();

        if(u <= hq)
        {
        rep(i,adj[u].size())
         {
            int v = adj[u][i];
            if(visited[v] == 0){
                q.push(v);
                visited[v] = 1;
               // t += 1;
            }
          }
        }
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,cases = 0;
    cin>>t;

    while(t--)
    {
        vi adj[MAX];
        //printf("\n");
        mem(Dist,INF);
        mem(visited,0);
        //mem(parent,-1);
        //bool possible = false;
        int N,ed;
        cin>>N>>ed;

        rep(i,ed)
        {
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            swap(u,v);
            adj[u].pb(v);
        }
         int source,dist;
         cin>>source>>dist;
         //printf("Case %d: %d",++cases,Dijkstra(source,dist));
         if(ed!=0)
         printf("Case %d: %d",++cases,bfs(adj,min(source,dist) , max(source,dist)));
         else
            printf("Case %d: %d",++cases,ed);

         //rep(i,N+4)
         //cout<<parent[i]<<"\t";
         //cout<<endl;
         //printShortestPath(parent,N);

    }
    return 0;
}
