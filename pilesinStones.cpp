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

    int n;
    cin>>n;

    map<int ,int>a;
    map<int, int>b;

    //int a[n],b[n];
    rep(i,n){
    int value;
    cin>>value;
    a[value] = i;
    }

    rep(i,n){
    int value;
    cin>>value;
    b[i] = value;
    }

    rep(i,n)
    cout<<b[i]<<" ";
    cout<<endl;

    rep(i,n)
    cout<<a[b[i]]<<" ";
    cout<<endl;

    rep(i,n)
    {
        if(!a[b[i]])
        {
            cout<<"NO"<<endl;
                return 0;
        }
    }
    cout<<"Yes"<<endl;
return 0;
}

