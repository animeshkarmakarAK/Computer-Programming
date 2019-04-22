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
int dp[MAX];
int counter = 0;
int binom(int n, int k)
{
    //cout<<"one"<<endl;

    if(k == (n || 0)){
       counter++;
       return 1;
    }
   // if(dp[n])
     //   return dp[n];

    binom(n-1,k-1) + binom(n,k-1)+1;
    //counter++;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    mem(dp,0);
    int n,k;
    cin>>n>>k;
   binom(n,k);
   cout<<counter<<endl;

}
