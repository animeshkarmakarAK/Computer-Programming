#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef vector<int> vi;
typedef vector<int,int>vii;
typedef vector<pii> vpi;
#define MAX 100

vi adj[MAX];

//vector< vector<int> >adj;
int in[MAX];
int out[MAX];

void out_degree(int n)
{
    rep(i,n)
    in[i] = adj[i].size();
}

void find_indegree(int n)
{
   rep(i,n)
   {
       rep(k,adj[i].size())
       {
                if(adj[i][k])
                    in[k]++;
       }
   }
}

void in_out(int n)
{
    repp(i,1,n)
    {
        rep(k,adj[i].size())
        {
            if(adj[i][k])
            {
                out[i]++;
                in[k]++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    mem(in , 0);
    mem(out,0);
    int u,v;
    int edge ,n;
    cin>>edge;
    cin>>n;
     rep(i,edge+1)
        {
            cin>>u>>v;
            adj[u].pb(v);
        }


    //find_indegree(n);
    //out_degree(n);

    in_out(n);
    repp(i,1,n)
    cout<<in[i]<<"\t";
    cout<<endl;



    repp(i,0,n)
    cout<<adj[i].size()<<"\t";
    cout<<endl;

    return 0;
}

