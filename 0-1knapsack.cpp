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
int price[] = {120,280,150,200};
int weight[] = {1,4,3,4};
int cap = 10;

// COIN CHANGING ......
int c[] = {1,3,5};
int k = sizeof(c)/sizeof(c[0]);
int dp[MAX];

int f(int x) {
if (x < 0) return 1e9;
if (x == 0) return 0;
if(dp[x] != -1) return dp[x];
int u = 1e9;
for (int i = 0; i < k; i++) {
u = min(u, f(x-c[i])+1);
dp[x] = u;
//return dp[x];
}
return dp[x];
}

int main()
{
    //knap(0);
    mem(dp,-1);
    int coin;
    cin>>coin;
    cout<<f(coin)<<endl;

    rep(i,MAX)
     if(dp[i] != -1)
    cout<<dp[i]<<"\t";
}
