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
#define SIZE 20005
typedef long long ll;

enum {not_visited,vam,lyn};
int visited[SIZE];
vector<int>adj[SIZE];
int maxx = 0;


int bfs()
{
   rep(i,SIZE)
   {
       if(!adj[i].empty() && (visited[i] == not_visited)){
        int vamm , lynn = 0;
       queue<int>q;
        q.push(i);
        visited[i] = vam;
         vamm++;

        while(!q.empty())
        {
            int u = q.front();
            q.pop();
          rep(k,adj[u].size()){
              int v  = adj[u][k];
             if(visited[v] == not_visited)
             {
                 q.push(v);
                 if(visited[u] == vam){
                    visited[v] = lyn;
                    lynn++;
                 }
                 else{
                    visited[v] = vam;
                    vamm++;
                 }

  maxx = max(vamm,lynn);
             }
          }
        }

       }
   }
   return maxx;
}

int main()
{
    // DECLEARING INFINITY AS A VARIABLE // not the topic of this code
   // double  f = -INFINITY ;
    cout<<f<<endl;
    int t,cases = 0;
    cin>>t;
    while(t--){
    mem(visited,0);
    int n;
    cin>>n;
    while(n--){
   int u,v;
   cin>>u>>v;
   adj[u].pb(v);
   adj[v].pb(u);

    }

    cout<<"Case "<<++cases<<" :"<<bfs()<<endl;
    }

    return 0;
}

