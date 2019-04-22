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
#define MAX 100

vector<int>edges[MAX];
int color[] = {1,2};
int visited[MAX];

string bfs()
{
    int source = 0;
    queue<int>q;
    q.push(source);
    visited[source] = color[0];

    while(!q.empty()){

        int u = q.front();
        q.pop();
        //visited[u] = color[0];
        rep(j,edges[u].size()){
          int v = edges[u][j];
          if(visited[v] && (visited[u] == visited[v]))
            return "NOT BICOLORABLE";
          else if(!visited[v])
          {
              if(visited[u] == color[0])
                visited[v] = color[1];
              else
                visited[v] = color[0];
          }
          q.push(v);


        }

    }
    return "BICOLORABLE";
}

int main()
{
    int node,edge;
    while(cin>>node, node != 0){
            cin>>edge;

    rep(i,node)
    visited[i] = 0;

    rep(k,edge){
    int u,v;
    cin>>u>>v;
    edges[u].pb(v);
    }

    cout<<bfs()<<endl;
    }

    return 0;
}
// IT'S NICELY DONE!
