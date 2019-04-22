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

vii adj[MAX+5];
int visited[MAX];

int Dist[MAX+5],parent[MAX];  // for storing the distance of every other node from source.
/*==========================================*/
int Dijkstra(int source, int N) {
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
            if(Dist[v] > Dist[u]+w && visited[v] == 0){
                visited[v] == 1;
                Dist[v] = Dist[u]+w;
                cout<<Dist[v]<<endl;
                Q.push({Dist[v],v});
                parent[v] = u; // for printing the shortest path
            }
        }
    }
    return Dist[N];
}

/*void printShortestPath(int parent[],int j)
{
    if(parent[j] == -1)
        return;
    printShortestPath(parent,parent[j]);
     cout<<j<<"\t";
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,cases = 0;
    cin>>t;

    while(t--)
    {
        mem(visited,0);
        printf("\n");
        mem(Dist,INF);
        mem(parent,-1);
        bool possible = false;
        int N,ed;
        cin>>N>>ed;

        rep(i,ed)
        {
            int u,v,w;
            cin>>u>>v>>w;
            if(u == N || v == N)
                possible = true;
            adj[u].pb(pmp(v,w));
            swap(u,v);
            adj[u].pb(pmp(v,w));
        }
        if(possible == false)
            printf("Case %d: Impossible",++cases);
        else
        //findPath(1,0);
         printf("Case %d: %d",++cases,Dijkstra(2,N));
         //rep(i,N+4)
         //cout<<parent[i]<<"\t";
         //cout<<endl;
         //printShortestPath(parent,N);

    }
    return 0;
}
