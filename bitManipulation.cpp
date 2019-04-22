#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for3(i,n) for(int i = n; i>=0; --i)
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    rep(i,(1<<n)){
     rep(j,i)
     if(i &(1<<j)){
        cout<<j;
     }
     cout<<endl;
    }
    return 0;
    int d[1<<n];
    for (int k = 0; k < n; k++) {
for (int b = 0; b < (1<<n); b++) {
if (b&(1<<k)) d[b] += d[b^(1<<k)];
}
}

rep(i,(1<<n))
cout<<d[i]<<"\t";
cout<<endl;

    unsigned int k = 1<<32;
    cout<<k<<endl;
    //int x = 2147483647;
    //cout<<x+1<<endl;

   int x;
   cin>>x;

    for3(i,31)
    if(x & (1<<i)) cout<<1;
    else cout<<0;

    // odd even checking
    cout<<endl;
    if(x & 1)cout<<1;
    else cout<<0;


    // code for even and odd
    /*rep(i,(1<<30))
    if(i & 1) cout<<1;
    else cout<<0;
    */

    return 0;



    //** pros: we can do the dec to bin conversion by using this so easily **//
}
