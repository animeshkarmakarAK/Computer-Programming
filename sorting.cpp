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

int main()
{
 vi v;
 v.pb(1);
 v.pb(2);v.pb(2);v.pb(3);v.pb(4);
   rep(i,v.size())
   cout<<v[i]<<endl;
   cout<<v.back()<<endl;

    string a;
    cin>>a;
    sort(a.begin(),a.end());
    random_shuffle(a.begin(),a.end());
    cout<<a<<endl;

    return 0;
}
