#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>adj[10];
    int nodes;

    cin>>nodes;
    while(nodes--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    // circle checking in graph .........
}
