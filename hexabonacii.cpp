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
#define MAX 10000
typedef long long int ll;
#define m 1666667
ll dp[MAX+5];
ll fn( ll n ) {
    if(n<0) return 0;
    if(dp[n] != -1)
        return dp[n];
     dp[n] = ( fn(n-1) + fn(n-2) + fn(n-3)+ fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
     return dp[n];
}
int main() {
    ll n;
    ll caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
            mem(dp,-1);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &dp[0], &dp[1], &dp[2], &dp[3], &dp[4], &dp[5], &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}

