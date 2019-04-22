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

vi v;
vi vv;

int bin(int a)
{
    while(a!=0)
    {
        int n = a%10;
        a/=10;
        v.pb(n);
    }
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int size_a,size_b;
    cin>>size_a>>size_b;

   ll a,b;
   cin>>a>>b;
   a = convertBinaryToDecimal(a);
   b = convertBinaryToDecimal(b);

   bitset<32>s(a);
   bitset<32>ss(b);
   bitset<32>c;
   rep(i,n)
   {
       for(int idx = 0; idx< n-i; idx++)
       {
           c |= s[i]
       }
   }
return 0;
}

