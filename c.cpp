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

    set<ull>ss;
    ull l,r;
    ull t;
    cin>>t;
    ull case_no = 1;
    while(t--){
    cin>>l>>r;
    ull sum = 0;
  for(ull idx = l; idx<=r; idx++){
      ss.clear();
    for(ull i = 1 ; i<= sqrt(idx); i+=2)
    {
        if(idx % i == 0){
            ss.insert(i);
            ss.insert(idx/i);
        }
    }

    set<ull>::iterator it;
    ull cnt = 0;
    for(it = ss.begin();it!=ss.end();it++)
        {
            //cout<<*it<<" ";
            if(*it % 2 != 0)
                cnt++;
        }

        //cout<<cnt<<endl;
        if(cnt%2 != 0)
            sum+= 1;
  }
  cout<<"Case "<<case_no++<<": "<<sum<<endl;
}
    return 0;

/*    ull l,r;
    ll t;
    cin>>t;

    set<int>s;

    while(t--)
    {
        ull sum = 0;
        cin>>l>>r;
        repp(i,l,r)
        {
            ull odd_div = 0;
            repp(k,1,sqrt(l))
            {
                if(i%k == 0){
                       /*if(k%2 == 0){
                      odd_div++;
                       }
                       s.insert(i);
                       s.insert(i/k);
                       cout<<i<<" "<<i/k<<endl;
                }
            }
            if(odd_div%2 != 0)
                sum += odd_div;
        }
        cout<<sum<<endl;
    }
    return 0;
    */
}
