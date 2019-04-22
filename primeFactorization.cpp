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

vi factor(int n )
{
    vi v;
    repp(i,2,sqrt(n))
    {
        if(n%i == 0){
            v.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
        v.pb(n);
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi result = factor(n);
    vi::iterator it;
    for(it = result.begin();it != result.end(); it++)
        cout<<*it<<"\t";

    return 0;
}

