#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e4 + 5;
typedef pair<int, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];
int visited[MAX];

/*int maxload(int s , int d)
{
    queue<PII>q;
    q.push(make_pair(0,s));
    int load = 1e+9;
    PII p;
    while(!q.empty())
    {
        p = q.top();
        q.pop();

        int u = p.second;
        int w = p.first;

        visited[u] = 1;
        for(int i = 0; i<adj[u].size();++i)
        {
            int v = adj[u][i].second;
            load = min(load,adj[u][i].first);
            if (!visited[v])
                q.push(v);

        }
    }

}*/
//***************************//
int  prim(int s, int d)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    int minimumCost = 0;
    PII p;
    int load = 1<<14;
    Q.push(make_pair(load, s));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        s = p.second;
       // if(s == d)
         //   break;
        // Checking for cycle
        load = min(load,p.first);
        if(s == d)
              return load;
        if(marked[s] == true)
            continue;
       // minimumCost += p.first;

        marked[s] = true;
        for(int i = 0;i < adj[s].size();++i)
        {
            y = adj[s][i].second;
            load = min(load , adj[s][i].first);
            if(marked[y] == false)
                Q.push(adj[s][i]);
        }
    }
    //return minimumCost;
  return load;
}

//***************************//

/*int prim(int s, int d)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int cost = 0;
    Q.push(make_pair(s,0));
    PII p;
    int u;

    while(!Q.empty())
    {
        p = Q.top();
        u = p.first;

        if(u == d)
            break;//receive destination

        int w = p.second;
        if(visited[u])
            continue;

        cost += w;
        visited[u] = 1;

        for(int i = 0; i< adj[u].size(); i++)
        {
            int v = adj[u][i].first;
            if(visited[v] == 0)
                Q.push(adj[u][i]);
        }
    }

    return cost;
}*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int nodes, edges;
    int  weight, minimumCost,testcases = 0;
    while(cin >> nodes >> edges , (nodes || edges) != 0)
    {
        ++testcases;
       memset(visited,0,sizeof(visited));
       memset(marked,false,sizeof(marked));

        int u,v;
        map<string,int>mymap;
        int idx =1;
     for(int i = 0;i < edges;++i)
     {
         string a , b;
        cin>>a>>b>>weight;

        if(!mymap[a]){
            mymap[a] = idx++;
        }
        u = mymap[a];
        cout<<mymap[a]<<endl;
        if(!mymap[b]){
            mymap[b] = idx++;
        }
        v = mymap[b];
        cout<<mymap[b]<<endl;

        adj[u].push_back(make_pair(weight,v));
        adj[v].push_back(make_pair(weight,u));
    }

    string start,dest;
    cin>>start>>dest;
    int s = mymap[start];
    int d = mymap[dest];
    cout<<s<<d<<endl;
    // Selecting 1 as the starting node
    minimumCost = prim(s,d);
    cout<<"Scenario #"<<testcases<<endl;
    cout << minimumCost <<"tons"<< endl;
    printf("\n");
    }
    return 0;
}

