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
typedef uint64_t ll;
#define MAX 100


ll s(ll n)
{
    if( n== 0) return 0;
    int sum  = 0;
   while(n != 0)
   {
       sum += n%10;
       n/=10;
   }
   return sum;
}

ll digit_sum(ll n)
{
    ll mid = n/2;
    ll r = mid + 1;
    ll l = mid;
    ll max_len = 1e-9;
    while(l+r != n)
    {
         if(l+r > n)
            r--;
        else l--;
    }
    return (s(l) + s(r));
}

ll fi(ll l , ll r ,ll n)
{
    int max_len = 1e-9;
    while(l>= 0 && r <= n)
    {
       // cout<<"running"<<endl;

        if(l + r > n)
            l--;
        else if(l + r < n)
            r++;
        else if(l + r == n )
        {
           int len = s(l) + s(r);
           if(len == max_len)
            break;
           if(len > max_len){
                max_len = len;
           }
                l--;
                r++;
        }
    }
    return max_len;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    ll l;
    ll r;
    ll mid = n/2;

   /* if(n%2 == 0)
        cout<<fi(mid , mid ,n);
    else
    cout<<fi(mid ,mid+1,n)<<endl;
    */
    cout<<digit_sum(n)<<endl;
    return 0;

}

