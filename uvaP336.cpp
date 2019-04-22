//PROBLEM BASED ON BSF
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
map<int,int>mymap;
set<int>s;//unvisited node will be erase from

int visited[MAX];
int counter = 0;

int bfs(int source,int ttl){
    queue<pii>q;
    int level = 0;
    int cc = 0;
    q.push(pmp(source,level));
    visited[source] = 1;
    s.erase(source);

    while(!q.empty()){
        pii top = q.front();
        q.pop();
        int u = top.uu;
        int l = top.vv;
         cout<<u<<" "<<l<<endl;
        //visited[u] = 1;

        if(l >= ttl)
            return cc;

        rep(i,edges[u].size()){
            int v = edges[u][i];
          if(visited[v] == 0){
            visited[v] = 1;
            //cc++;
            s.erase(v);
            //cout<<" for "<<v <<" cc = "<<cc<<endl;
            int ll = l+1;
            q.push(pmp(v,ll));
          }
        }
    }
}

int main()
{
    int nc;
    int ttl,source,cases = 0;

    while(cin>>nc, nc!=0){
            edges.clear();
    //cin>>nc;
    //set<int>s;
    for(int i = 0; i<MAX;++i)
        for(int j = 0; j<edges[i].size();++j)
        edges[i][j] = 0;

    rep(i,nc){
    int u,v;
    cin>>u>>v;
    edges[u].pb(v);
    swap(u,v);
    edges[u].pb(v);
   s.insert(v);
   s.insert(u);
    }

    cout<<"set output"<<endl;
    set<int>::iterator itr;
    for(itr = s.begin(); itr!=s.end();itr++)
    cout<<*itr<<"\t";
    cout<<endl;
  // cout<<s.size()<<endl;
   printf("\n");

    while(cin>>source>>ttl, (ttl && source) != 0){
            rep(k,MAX)
            visited[k] = 0;

        bfs(source,ttl);
        cout<<"Case "<<++cases <<": "<< s.size()<<endl;
    }
    }
}
