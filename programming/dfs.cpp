#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100];

void adjacency_list(int n)
{
    for(int i = 0; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
}

int dfs(int source, int n)
{
   stack<int>s;
   int visited[n];
   int edge_id[n];
   int path[100];

   memset(visited,0,sizeof(visited));
   memset(edge_id,0,sizeof(edge_id));

          int i = 0;
          path[i++] = source;

    s.push(source);
   while(!s.empty()){
        int u = s.top();
        s.pop();
       // cout<<"u: "<<u<<endl;

    while(edge_id[u]<adj[u].size()){
            int v = adj[u][edge_id[u]];
            edge_id[u]++;
            cout<<"v : "<<v<<endl;
        if(visited[v] == 0){
                visited[v] = 1;
                s.push(u);
                s.push(v);
                path[i++] = v;
              //  break;
        }
    }
   }

   for(int i = 0; i<n; i++)
   cout<<path[i]<<"->";
   cout<<endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(false);

        int nodes;
    cout<<"Enter no. of nodes : ";
    cin>>nodes;
    printf("\n");
    cout<<"Enter the connected nodes : ";
    adjacency_list(nodes);
    printf("\n");
    int source;
    cout<<"Enter the source : " <<endl;
    cin>>source;
    dfs(source,nodes);

    return 0;
}
