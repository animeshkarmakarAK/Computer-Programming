#include<bits/stdc++.h>

using namespace std;
#define MAX 100000
vector<int>edges[MAX];
vector<int>cost[MAX];

map<int,int>outdegree;
int visited[100];

int inorder(int u)
{
return edges[u].size();
}

void findingOutdegree(int vertex)
{
    for(int i = 1; i<=vertex ; ++i)
        visited[i] = 0;

    for(int i = 1; i<=vertex; i++){
            visited[i] = 1;
        for(int j = 0;j < edges[i].size(); ++j){
                int v = edges[i][j];
                //cout<<"v = "<<v<<endl;
                if(visited[v])
                  outdegree[v]++;
        }
    }
}

int main()
{
    int edge,vertex;
    cin>>edge>>vertex;

    for(int i = 1; i<=edge; i++){
        int u,v;
        cin>>u>>v;

        edges[u].push_back(v);
        cost[u].push_back(1);
    }
    cout<<"Indegree of nodes"<<endl;
    for(int i = 1; i<=vertex; ++i){
        cout<<inorder(i)<<"\t";
    }
    cout<<endl;

    cout<<"outdegree of nodes"<<endl;
    findingOutdegree(vertex);

    // printing using iterator
   /* map<int,int>::iterator i;
    for( i = outdegree.begin(); i != outdegree.end(); ++i){
        printf("%d\n",*i);
    }*/
    printf("\n");
    for(int i = 1; i<= vertex; ++i)
        cout<<outdegree[i]<<"\t";
   printf("\n");

}
