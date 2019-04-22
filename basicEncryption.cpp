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

    string a;
    ll s;
    int n;
    cin>>n>>s;

  rep(idx,n+1)
    {
        getline(cin,a);
        int l = a.size();

        rep(i,l){
          char c;
         if(a[i] >= 'a' && a[i] <= 'z')
            {
                c = a[i];
                int ss = s%122;
                if(ss + c > int('z'))
               c = 'a'+((ss+c)%122);
               else c  =  (ss + c );
            }

           else if(a[i] >= 'A' && a[i] <= 'Z')
            {
                c = a[i];
                int ss = s%90;
                if(ss + c > int('Z'))
                c = 'A'+((ss+c)%90);
                else c = ss+c;

            }
            else
                c = a[i];

                cout<<c;
    }
    cout<<endl;
    }


return 0;
}

