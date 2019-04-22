#include<bits/stdc++.h>

using namespace std;
#define mp make_pair
#define pb push_back
typedef pair<int,int>pii;
typedef vector<int>v;

int main()
{
   int ver;
   cin>>ver;

   v<pii>adj(ver+1);

   for(int i=0;i<ver;i++)
   {
       int u,v,w;
       cin>>u>>v>>w;
       adj[u].pb(mp(v,w));
   }
}
