#include<bits/stdc++.h>

using namespace std;

#define infinity 1000000000

vector<int>dis[100],cost[100];
int visited[100];
int d[100];

int bfs(int s,int n)
{

     for(int i = 0; i<n; i++)
        visited[i] = 0;

         for(int i = 0; i<n; i++)
            d[i] = infinity;

        queue<int>Q;
        Q.push(s);
        visited[s] = 1;
         d[s] = 0;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        for(int i =0; i<dis[u].size(); ++i){
                int v = dis[u][i];
                cout<<cost[u][v]<<endl;
        if(d[v] > d[u] + cost[u][v]){
            d[v] = d[u] + cost[u][v];
            Q.push(v);
        }
            /*if(visited[dis[u][i]] == 0){
                int v = dis[u][i];
                //cout<<v<<endl;
                visited[v] = 1;
                 Q.push(v);
            }*/
        }

    }

    return d[n];
}

int main()
{
    cout<<"no of nodes: ";
    int n;
    cin>>n;

        dis[0].push_back(1);
        dis[0].push_back(2);
        dis[1].push_back(3);
        dis[2].push_back(3);
        cost[0][1] = 10;


    cout<<bfs(0,n)<<endl;
}
