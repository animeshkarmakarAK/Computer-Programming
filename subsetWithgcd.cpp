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
vector<ll>v;

int n;
int kn;
ll key[100];
ll  a[100];

bool b[100];
vector<vector<ll> >sub;

ll gcd(ll a , ll b)
{
    if(b == 0)
       return a;

     gcd(b,a%b);
}

void gen(int n)
{
   rep(k,(1<<n)-1) // SHIFTING ONE n TIMES THAT'S MEAN IN n PLACE THERE IS A ONE , SO 2^n
   {
       vector<ll>v;
       rep(j,n){
       if(k& (1<<j))
        v.pb(a[j]);
          }

          /*rep(i,v.size())
          cout<<v[i]<<"\t";
          cout<<endl;*/
         //gcd

         sub.push_back(v);
        /* ll result = 0;
         rep(idx , v.size())
         {
             result = gcd(result,v[idx]);
         }

         rep(idx,kn)
         {
             if(key[idx] == result){
                b[idx] = true;
               break;
             }
         }*/

          v.clear();
   }
}
int main(){
    mem(b,false);
cin>>n;
rep(i,n)
cin>>a[i];

gen(n);
cin>>kn;
int kk;
rep(k,kn){
    cin>>kk;

rep(i,sub.size())
{
    int r = 0;
    for(int k = 0; k <= sub[i].size();k++)
    {
         r = gcd(r,sub[i][k]);
    }
  if(r == kk)
    cout<<"Y"<<endl;
  else
    cout<<"N"<<endl;
}
}

rep(i,kn)
{
    if(b[i])
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}
return 0;
}
