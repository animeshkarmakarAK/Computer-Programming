#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define si(n) scanf("%d",&n);
#define sc(n) scanf("%c",&n);
#define sl(n) scanf("%lld",&n);
#define print(n) printf("%d",n);
#define print_ll(n) printf("%lld",n);
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
typedef long long int ll;
typedef long long c;
typedef complex<c>P;
#define x real()
#define y imag()
#define ull uint64_t

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin>>n>>m;

    ll maxx,minn;
    if(n<=m){
        maxx = 0,minn = 0;
        cout<<maxx<<" "<<minn<<endl;
        return 0;
    }
    maxx = n - 2*m;

    // MINN

    if(m == 2)
       cv = 3;
    else if (m == 3)
        cv = 3;
    else {
            ll edge  = 3;
            ll node = 3;
        while(edge<=m)
        {
           m--;



        }
    }

    ll e_cutt = 0;
    if(m == 0)
        minn = n;
    else if(m == 1){
        e_cutt = 2;
        minn = n - e_cutt;
    }
    else{
        e_cutt = 3;
        //n  = n - e_cutt;
         m-= 2;
        while(m--)
        {
          e_cutt++;
        }
        minn = n - e_cutt;
    }

    cout<<maxx<<" "<<minn<<endl;

return 0;
}

