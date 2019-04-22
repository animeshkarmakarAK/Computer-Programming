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

int arr[8][8];

void search(int kx , int ky)
{
if (kx == tx && ky == ty) {
//c++;
return;
}
for (int x = 1; x < =n; x++) {
if (r1[x] || r2[x+y] || r3[x-y+n-1]) continue;
r1[x] = r2[x+y] = r3[x-y+n-1] = 1;
search(y+1);
r1[x] = r2[x+y] = r3[x-y+n-1] = 0;
}
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    mem(arr,0);
    int n;
    cin>>n;

    int qx,qy;
    cin>>qx>>qy;
    int kx,ky;
    cin>>kx>>ky;
    int tx,ty;
    cin>>tx>>ty;


return 0;
}

