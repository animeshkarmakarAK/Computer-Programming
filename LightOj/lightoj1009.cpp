#include<bits/stdc++.h>

using namespace std;

#define maxv 20005
vector<int>g[maxv];
int visited[maxv];
int fighter_type[maxv];
int vampire, lykan;

void clear()
{
 for(int i = 0; i <= maxv; i++){
     g[i].clear();
     visited[i] = 0;
     fighter_type[i] = 0;
     vampire = 0;
     lykan = 0;
 }
}

// vampire = 1;
// lykan = 2;

int check_fighter(int u, int v)
{
    if(fighter_type[u] == 1) return 2;
    else if(fighter_type[u] == 2) return 1;
}

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = 1;
  fighter_type[s] = 1;
  vampire++;

  while(!q.empty()){

      int u = q.front();
      q.pop();

      for(int i = 0; i < g[u].size(); i++)
      {
          int v = g[u][i];
          if(visited[v] == 0){
              if(check_fighter(u,v) == 1) {
                  fighter_type[v] = 1;
                  vampire++;
              }
              if(check_fighter(u,v) == 2){ 
                  fighter_type[v] = 2;
                  lykan++;
              }

              visited[v] = 1;
              q.push(v);
              
         }
      }

  }

}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;


    for(int tc = 1; tc <= t; tc++)
    {
        int nvertices= 0;
        clear();
        int edges;
        cin>>edges;
        while(edges--)
        {
            int u, v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);

            nvertices = max(nvertices,max(u,v));
        }

        for(int i = 1; i <= nvertices; i++)
        {
            if(visited[i] == 0)
               bfs(i);
        }

        printf("Case %d: %d\n",tc,max(vampire, lykan));
    }
    
    return 0;
}
