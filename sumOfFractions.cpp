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

int gcd(int a, int b)
{
    if(b == 0) return a;
    gcd(b,a%b);
}

int lcm(int a ,int b)
{
    return b*a/gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
          int a,b,c;
        int d1,d2,d3;
        char ch;
     cin>>a>>ch>>d1>>b>>ch>>d2>>c>>ch>>d3;
     /* int d,dd;
      d = max(d1,d2);
      dd = min(d1,d2);
      int r = lcm(d,dd);
      r = lcm(max(d3,r),min(d3,r));*/
      int r;

      if(d1 > d2)
         r = lcm(d1,d2);
      else r = lcm(d2,d1);

      if(r > d3)
        r = lcm(r,d3);
      else r = lcm(d3,r);

      int num = a*(r/d1) + b*(r/d2) + c *(r/d3);

       //cout<<num<<'/'<<r<<endl;
     /* if(num % r == 0){
        num/=r;
        r = 1;
      }*/

      int max_div ;
       /*for(int i = min(num,r); i>=2; --i)
      {
          if((num % i == 0) && (r % i == 0))
          {
              max_div = i;
          }
      }*/

      max_div = gcd(num,r);

      cout<<num/max_div<<'/'<<r/max_div<<endl;

    }

    return 0;
}


