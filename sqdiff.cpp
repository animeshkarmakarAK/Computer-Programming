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



string prime(ull n)
{
    if(n<=1) return "NO";
    if(n == 2) return "YES";
    if(n%2 == 0) return "NO";
    ull t = sqrt(n);
    for(ull i = 3;i <= t;i+=2)
    {
        if(n%i != 0){
            for(int j = i*i;i<=n;j+=2*i)
            {
                if(n%j == 0)
                    return "NO";
            }
        }
            //return "NO";
    }
    return "YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    ull a,b;
    cin>>a>>b;
    cout<<prime(a*a - b*b)<<endl;
    }
return 0;
}

