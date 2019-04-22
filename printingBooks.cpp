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
typedef uint64_t ull;
#define MAX 100

ull no_of_digits(ull n)
{
    int cnt = 0;
   while(n != 0)
   {
       cnt++;
       n/=10;
   }
   return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    ull n,x ;
    cin>>n;
    cin>>x;
    ull digit = 0;
    ull cnt = 1;
    while(1)
    {
        digit += no_of_digits(x);
        //cout<<digit<<endl;
        if(digit == n){
            cout<<cnt<<endl;
            break;
        }
        else if(digit > n){
            cout<< -1<<endl;
            break;
        }
        else x++;
        cnt++;

    }
    }
    return 0;
}

