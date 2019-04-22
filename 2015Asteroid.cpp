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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout<<sqrt(15);
    return 0;
    int n1,n2;
    cin>>n1;

    int x[MAX],y[MAX];
    rep(i,n1)
    cin>>x[i]>>y[i];
    int vx,vy;
    cin>>vx>>vy;

    int xx[MAX],yy[MAX];
    cin>>n2;
    rep(i,n2)
    cin>>xx[i]>>yy[i];
    int vvx,vvy;
    cin>>vvx>>vvy;

   int step1 = 500 / max(abs(vx),abs(vy));
   int step2 = 500 / max(abs(vvx),abs(vvy));

   for(int i = 0; i< step1 && i < step2 ; i++)
   {
       rep(j,n1)
       {
           rep(k,n2)
           {
               int dis =sqrt((x[j] - xx[k]) * (x[j] - xx[k]) + (y[j] - yy[k]) * (y[j] - yy[k]));
               if(dis <= 0)
                break;
           }
       }
   }


    return 0;
}

